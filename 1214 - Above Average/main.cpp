#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

void process(int m) {
  int V[m];
  int media = 0;
  for (int i = 0; i < m; i++) {
    cin >> V[i];
    media += V[i];
  }

  int c = 0;
  for (int i = 0; i < m; i++) {
    if (V[i]*m > media)
      c++;
  }

  cout << fixed << setprecision(3) << (100.0*c)/m << '%' << endl;
}

int main () {
  int n, m;
  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> m;
    process(m);
  }

  return 0;
}
