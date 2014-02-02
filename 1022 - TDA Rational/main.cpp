#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int mdc (int a, int b) {
  if (a == b)
    return a;
  else if (a > b)
    return mdc(b, a-b);
  else
    return mdc(a, b-a);
}

void print (int a, int b) {
  cout << a << '/' << b << " = ";
  int m = mdc(fabs(a),fabs(b));
  a /= m;
  b /= m;
  cout << a << '/' << b << endl;
}

void sum (int a, int b, int c, int d) {
  int n1 = a*d + b*c;
  int n2 = b*d;
  print(n1, n2);
}

void sub (int a, int b, int c, int d) {
  sum(a,b,-c,d);
}

void mult (int a, int b, int c, int d) {
  int n1 = a*c;
  int n2 = b*d;
  print(n1, n2);
}

void div (int a, int b, int c, int d) {
  mult(a,b,d,c);
}

int main () {
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    int a, b, c, d;
    char op;
    char aux;
    // a / b op c / d
    cin >> a >> aux >> b >> op;
    cin >> c >> aux >> d;
    if (op == '+')
      sum(a,b,c,d);
    else if (op == '-')
      sub(a,b,c,d);
    else if (op == '*')
      mult(a,b,c,d);
    else if (op == '/')
      div(a,b,c,d);
  }

  return 0;
}
