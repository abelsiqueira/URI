#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int mdc (int a, int b) {
  if (a == b)
    return a;
  if (a > b)
    return mdc(b, a-b);
  else
    return mdc(a, b-a);
}

int main () {
  int n, a, b;
  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> a >> b;
    cout << mdc(a,b) << endl;
  }

  return 0;
}
