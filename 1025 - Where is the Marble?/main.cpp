#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

class Node {
  public:
    Node (int v = 0, Node *p = 0) : x(v), prox(p) {}
    ~Node () {
      if (prox != 0)
        delete prox;
    }

    int x;
    Node *prox;
};

class List {
  public:
    List () : head(new Node(0,new Node(1e9,0))) {}
    ~List () {
      delete head;
    }

    void add () {
      int x;
      cin >> x;

      Node *node = new Node(x,0);
      Node *p = head;

      while (p->prox != 0) {
        if (p->prox->x > node->x) {
          node->prox = p->prox;
          p->prox = node;
          return;
        }
        p = p->prox;
      }
    }

    void find (int y) const {
      Node *p = head->prox;

      int k = 1;
      while (p->x < 1e9) {
        if (p->x == y) {
          cout << y << " found at " << k << endl;
          return;
        } else if (p->x > y)
          break;
        p = p->prox;
        k++;
      }
      cout << y << " not found" << endl;
    }

    void print () const {
      Node *p = head->prox;
      while (p->x < 1e9) {
        cout << p->x << ' ';
        p = p->prox;
      }
      cout << endl;
    }

    Node *head;
};

int main () {
  int n, q;
  cin >> n >> q;
  int k = 1;
  while (n != 0) {
    List L;
    for (int i = 0; i < n; i++)
      L.add();
    int aux;
    cout << "CASE# " << k++ << ':' << endl;
    for (int i = 0; i < q; i++) {
      cin >> aux;
      L.find(aux);
    }

    cin >> n >> q;
  }

  return 0;
}
