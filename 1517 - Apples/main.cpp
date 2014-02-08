#include <iostream>
#include <iomanip>
#include <cmath>
#include <list>

using namespace std;

class Edge {
  public:
    Edge(int f = 0, int t = 0) : from(f), to(t) {}
    ~Edge() {}
    int from, to;

    void print () const {
      cout << '(' << from << ',' << to << ')' << endl;
    }
};

class Graph {
  public:
    Graph() : nodes(0) {}
    Graph(int n) : nodes(n) {}
    ~Graph() { }

    void add_edge(int i, int j) {
      Edge edge(i,j);
      edges.push_back(edge);
    }

    int max_depth () const {
      int n_edges = edges.size();
      int distance[nodes];
      int father[nodes];

      list<Edge>::const_iterator p = edges.begin();
      list<Edge>::const_iterator p_end = edges.end();

      for (int i = 0; i < nodes; i++) {
        distance[i] = -100000;
        father[i] = -1;
      }
      distance[0] = 0;

      int max = 0;
      for (int i = 0; i < nodes; i++) {
        while (p != p_end && p->from == i) {
          int j = p->to;
          if (distance[j] < distance[i] + 1) {
            distance[j] = distance[i] + 1;
            father[j] = i;
          }
          if (distance[j] > max)
            max = distance[j];
          p++;
        }
      }

      return max;

    }

    void print () const {
      list<Edge>::const_iterator p = edges.begin();
      list<Edge>::const_iterator p_end = edges.end();
      cout << "Edges:" << endl;
      while (p != p_end) {
        p->print();
        p++;
      }
    }

    int nodes;
    list<Edge> edges;
};

void process (int k) {
  int apx[k], apy[k], apt[k];
  for (int i = 0; i < k; i++)
    cin >> apx[i] >> apy[i] >> apt[i];
  int x, y;
  cin >> x >> y;

  /* Edges mean that you can reach the fruit from that node, at the 
   * given time.
   * Nodes are the starting point and the fruit drop points.
   */
  Graph graph(k+1); 
  for (int i = 0; i < k; i++) {
    if (max(fabs(apx[i]-x),fabs(apy[i]-y)) <= apt[i])
      graph.add_edge(0,i+1);
  }
  for (int i = 0; i < k; i++) {
    for (int j = i+1; j < k; j++)
      if ( max(fabs(apx[i]-apx[j]), fabs(apy[i]-apy[j])) <= apt[j]-apt[i])
        graph.add_edge(i+1,j+1);
  }

//  graph.print();
  cout << graph.max_depth() << endl;
}

int main () {
  int n, m, k;
  cin >> n >> m >> k;
  while (n != 0) {
    process(k);
    cin >> n >> m >> k;
  }
  return 0;
}
