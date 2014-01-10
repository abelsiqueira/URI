#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

void count (int a, int b) {
  int D[10];
  for (int i = 0; i < 10; i++)
    D[i] = 0;

  for (int n = a; n <= b; n++) {
    if (b - n > 10 && n%10 == 0) {
      for (int i = 0; i < 10; i++)
        D[i]++;
      int k = n/10;
      while (k > 0) {
        D[k%10] += 10;
        k /= 10;
      }
      n += 9;
      continue;
    }
    int k = n;
    while (k > 0) {
      D[k%10]++;
      k /= 10;
    }
  }

  for (int i = 0; i < 9; i++)
    cout << D[i] << ' ';
  cout << D[9] << endl;
}

int main () {
  int a, b;
  cin >> a >> b;
  while (a != 0 || b != 0) {
    count(a,b);
    cin >> a >> b;
  }

  return 0;
}
