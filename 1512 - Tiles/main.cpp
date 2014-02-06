#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int mdc (int a, int b) {
  if (a == b)
    return a;
  else if (a > b)
    return mdc(b, a-b);
  else if (b > a)
    return mdc(a, b-a);
}

int mmc (int a, int b) {
  return a*b/mdc(a,b);
}

typedef long int myint;

int main () {
  myint n, a, b;

  cin >> n >> a >> b;
  while (n != 0) {
    cout << n/a + n/b - n/mmc(a,b) << endl;
    cin >> n >> a >> b;
  }

  return 0;
}
