#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

typedef unsigned long long int myint;

myint fac_up_to (myint n, myint k) {
  if (k <= 0)
    k = 1;
  myint fac = 1;
  while (n >= k)
    fac *= n--;
  return fac;
}

int main () {
  myint m, n;

  while (cin >> m >> n) {
    if (m == n)
      cout << 2*fac_up_to(n,1);
    else if (m > n)
      cout << fac_up_to (n,1)*(1 + fac_up_to(m,n+1));
    else
      cout << fac_up_to (m,1)*(1 + fac_up_to(n,m+1));

    cout << endl;
  }

  return 0;
}
