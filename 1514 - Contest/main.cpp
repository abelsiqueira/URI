#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

void process (int n, int m) {
  int solves[n][m];
  for (int i = 0; i < n; i++)
    for (int j = 0; j < m; j++)
      cin >> solves[i][j];

  bool sum_row_less_than_m = true;
  bool sum_col_more_than_0 = true;
  bool sum_col_less_than_n = true;
  bool sum_row_more_than_0 = true;

  int sum_js[m];
  for (int j = 0; j < m; j++)
    sum_js[j] = 0;
  for (int i = 0; i < n; i++) {
    int sum_i = 0;
    for (int j = 0; j < m; j++) {
      int s = solves[i][j];
      sum_i += s;
      sum_js[j] += s;
    }
    if (sum_i == 0)
      sum_row_more_than_0 = false;
    else if (sum_i == m)
      sum_row_less_than_m = false;
  }
  for (int j = 0; j < m; j++) {
    if (!sum_col_less_than_n && !sum_col_more_than_0)
      break;
    if (sum_js[j] == 0)
      sum_col_more_than_0 = false;
    else if (sum_js[j] == n)
      sum_col_less_than_n = false;
  }

  int e = 4;
  if (!sum_col_less_than_n)
    e--;
  if (!sum_col_more_than_0)
    e--;
  if (!sum_row_less_than_m)
    e--;
  if (!sum_row_more_than_0)
    e--;
  cout << e << endl;
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
