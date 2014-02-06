#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

void process (int n, int m) {
  char grid[n][m];
  for (int i = 0; i < n; i++)
    for (int j = 0; j < m; j++)
      cin >> grid[i][j];

  int p, q;
  cin >> p >> q;
  p /= n;
  q /= m;

  for (int i = 0; i < p*n; i++) {
    for (int j = 0; j < q*m; j++)
      cout << grid[i/p][j/q];
    cout << endl;
  }
  cout << endl;
}

int main () {
  int n, m;
  cin >> n >> m;
  while (n != 0) {
    process(n, m);
    cin >> n >> m;
  }
  return 0;
}
