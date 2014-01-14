#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

void solve (int n) {
  int V[n];
  int peaks = 0;
  for (int i = 0; i < n; i++)
    cin >> V[i];

  if ( (V[0] - V[n-1]) * (V[0] - V[1]) > 0 )
    peaks++;
  if ( (V[n-1] - V[n-2]) * (V[n-1] - V[0]) > 0 )
    peaks++;
  for (int i = 1; i < n-1; i++) {
    if ( (V[i] - V[i-1]) * (V[i] - V[i+1]) > 0 )
      peaks++;
  }
  cout << peaks << endl;
}

int main () {
  int n;
  cin >> n;

  while (n != 0) {
    solve(n);

    cin >> n;
  }

  return 0;
}
