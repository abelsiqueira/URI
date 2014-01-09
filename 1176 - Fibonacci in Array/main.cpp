#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

void populate (unsigned long long int n, unsigned long long int F[]) {
  F[0] = 0;
  if (n == 0)
    return;
  F[1] = 1;
  for (unsigned long long int i = 2; i <= n; i++)
    F[i] = F[i-1] + F[i-2];
}

int main () {
  unsigned long long int n;
  cin >> n;

  unsigned long long int V[n];
  unsigned long long int max = 0;

  for (unsigned long long int i = 0; i < n; i++) {
    cin >> V[i];
    if (V[i] > max) max = V[i];
  }

  unsigned long long int F[max+1];

  populate(max, F);

  for (unsigned long long int i = 0; i < n; i++)
    cout << "Fib(" << V[i] << ") = " << F[V[i]] << endl;

  return 0;
}
