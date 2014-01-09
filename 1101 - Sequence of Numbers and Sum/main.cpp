#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

class Pair {
  public:
    Pair (int x = 0, int y = 0) : a(x), b(y) {};
    ~Pair () {};

    long int a, b;

    void read () { 
      cin >> a >> b;
      if (b < a) {
        int t = a;
        a = b;
        b = t;
      }
    };

    void sequence () const {
      for (int i = a; i <= b; i++) {
        cout << i << ' ';
      }
    };

    int sum () const {
      return (b*(b+1) - a*(a-1))/2;
    };
};

int main () {
  Pair p;

  p.read();

  while (p.a > 0) {
    p.sequence();
    cout << "Sum=" << p.sum() << endl;
    p.read();
  }

  return 0;
}
