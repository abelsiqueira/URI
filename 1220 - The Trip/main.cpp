#include <cstdio>
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main () {
  int n;

  cin >> n;
  while (n != 0) {
    double V[n]; 
    int mean = 0;
    for (int i = 0; i < n; i++) {
      cin >> V[i];
      mean += floor(100*V[i]);
    }
    int sum = 0.0;
    for (int i = 0; i < n; i++) {
      sum += fabs(mean - 100*n*V[i]);
    }
    printf("$%.2lf\n", sum*0.005/n);

    cin >> n;
  }

  return 0;
}
