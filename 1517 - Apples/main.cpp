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
      int n_edges = edges.length();
      bool visited[n_edges];
      for (int i = 0; i < n_edges; i++)
        visited[i] = false;
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
  Graph graph; 
  for (int i = 0; i < k; i++) {
    if (fabs(apx[i]-x)+fabs(apy[i]-y) < apt[i])
      graph.add_edge(0,i+1);
    for (int j = i+1; j < k; j++)
      if (fabs(apx[i]-apx[j])+fabs(apy[i]-apy[j]) < apt[j]-apt[i])
        graph.add_edge(i+1,j+1);
  }

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
