#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

class Problem {
  public:
    int x, y, xf, yf;

    bool read() {
      cin >> x >> y >> xf >> yf;
      return x+y+xf+yf != 0;
    };

    int solve() {
      if (xf == x && yf == y)
        return 0;
      else if (xf == x || yf == y)
        return 1;
      else if (fabs(yf-y) == fabs(xf-x))
        return 1;
      else
        return 2;
    };
};

int main () {
  Problem p;

  while (p.read()) {
    cout << p.solve() << endl;
  }

  return 0;
}
