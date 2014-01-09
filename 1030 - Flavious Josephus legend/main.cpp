#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

class Node {
  public:
    Node(int d = 0, Node *p = 0) : x(d), prox(p) {};
    int x;
    Node *prox;
};

class List {
  public:
    List (int n) {
      head = new Node(1);
      curr = head;
      for (int i = 2; i <= n; i++) {
        curr->prox = new Node(i);
        curr = curr->prox;
      }
      curr->prox = head;
      length = n;
    };
    ~List () {
      while (length > 0) {
        curr = head->prox;
        delete head;
        head = curr;
        length--;
      }
    }

    Node *head;
    Node *curr;
    int length;

    int pop () {
      if (length == 1) {
        int x = head->x;
        delete head;
        head = 0;
        curr = 0;
        return x;
      }
      int x = curr->prox->x;
      Node *temp = curr->prox;
      if (head == temp)
        head = head->prox;
      curr->prox = temp->prox;
      delete temp;
      length--;
      return x;
    }

    void move (int k) {
      while (k-- > 1) 
        curr = curr->prox;
    }

    void print () const {
      if (length == 0) {
        cout << "Empty" << endl;
        return;
      }
      Node *p = head;
      cout << p->x;
      p = p->prox;
      while (p != head) {
        cout << ' ' << p->x;
        p = p->prox;
      }
      cout << endl;
    }
};

int solve (int n, int k) {
  List L(n);
  while (L.length > 1) {
    L.move(k);
    L.pop();
  }
  return L.head->x;
}

int main () {
  int np, n, k;
  cin >> np;

  for (int c = 1; c <= np; c++) {
    cin >> n >> k;
    cout << "Case " << c << ": " << solve(n,k) << endl;
  }

  return 0;
}
