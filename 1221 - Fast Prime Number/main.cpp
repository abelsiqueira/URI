#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

typedef unsigned int myint;

bool is_prime (myint x) {
  if (x == 2)
    return true;
  if (x%2 == 0)
    return false;
  int max=sqrt(x);
  for (int k = 3; k < max; k+=2)
    if (x%k == 0)
      return false;
  return true;
}

int main () {
  int n;
  cin >> n;

  for (int i = 0; i < n; i++) {
    myint x;
    cin >> x;
    if (is_prime(x))
      cout << "Prime";
    else
      cout << "Not Prime";
    cout << endl;
  }

  return 0;
}
