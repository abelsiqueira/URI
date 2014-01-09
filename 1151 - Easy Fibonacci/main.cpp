#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

void fibonacci (int n) {
  if (n <= 0)
    return;
  if (n == 1) {
    cout << "0" << endl;
    return;
  } 

  int a, b;
  a = 0;
  b = 1;
  cout << "0 1";
  for (int i = 2; i < n; i++) {
    int t = b;
    b = a + b;
    a = t;
    cout << ' ' << b;
  }

  cout << endl;
}

int main () {
  int n;
  cin >> n;

  fibonacci(n);

  return 0;
}
