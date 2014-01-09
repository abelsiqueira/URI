#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

class Problem {
  public:
    int r1, x1, y1;
    int r2, x2, y2;

    bool read () {
      return cin >> r1 >> x1 >> y1 >> r2 >> x2 >> y2;
    }

    void process () const {
      double d12 = sqrt(pow(x1-x2,2) + pow(y1-y2,2));
      if (d12 + r2 <= r1)
        cout << "RICO" << endl;
      else
        cout << "MORTO" << endl;
    }
};

int main () {
  Problem p;

  while (p.read()) {
    p.process();
  }

  return 0;
}
