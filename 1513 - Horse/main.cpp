#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

class Board {
  public:
    Board() : grid(0), n(0), m(0) {}
    ~Board() { delete []grid; }

    void read(int n, int m) {
      this->n = n;
      this->m = m;
      this->grid = new char[n*m];
      int k = 0;
      for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
          cin >> grid[k++];
    }

    char *grid;
    int n, m;
};

int main () {
  int n, m, k;
  cin >> n >> m >> k;
  while (n != 0) {
    Board board;

    board.read(n,m);
    board.solve();

    cin >> n >> m >> k;
  }
  return 0;
}
