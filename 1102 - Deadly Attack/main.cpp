#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

class Vector {
  public:
    Vector(double vx, double vy) : x(vx), y(vy) { };
    double x, y;

    double length () const {
      return sqrt(x*x+y*y);
    };

    double angle (const Vector & w) const {
      return atan2(w.y-y, w.x-x);
    };

    void print () const {
      cout << x << ' ' << y << endl;
    };
};

class Problem {
  public:
    int x, y, r;
    int p, q, a, t;

    bool read () {
      cin >> x >> y >> r;
      if (x == 0 && y == 0 && r == 0)
        return false;
      cin >> p >> q >> a >> t;
      a = a*3.14159/180;
      t = t*3.14159/180;
      return true;
    };

    void process () {
      // First, shift the weapon to the origin
      x -= p;
      y -= q;

      // There are 2 types of area: Triangle formed by the extremity of the
      // same beam, and circular sections formed by different beams.
      double m1 = tan(a+t/2);
      double m2 = tan(a-t/2);

      double c = x*x+y*y-r*r;
      double a1 = 1 + m1*m1, b1 = -2*(x+m1*y);
      double a2 = 1 + m2*m2, b2 = -2*(x+m2*y);

      double D1 = b1*b1 - 4*a1*c;
      double D2 = b2*b2 - 4*a2*c;

      double A = 0.0;

//      cout << "D1 = " << D1 << endl;
//      cout << "D2 = " << D2 << endl;

      if (D1 >= 0 && D2 >= 0) {
        A = twoIntercept(a1, b1, a2, b2, c, m1, m2, D1, D2);
      } else if (D1 >= 0) {
      } else if (D2 >= 0) {
      } else {
      }
      cout << fixed << setprecision(1) << A << endl;
    };

    double triangleArea (double x1, double y1, double x2, double y2) const {
      Vector v1(x1-x, y1-y);
      Vector v2(x2-x, y2-y);
      v1.print();
      v2.print();
      double alpha = v1.angle(v2);
      return 0.5*v1.length()*v2.length()*sin(alpha);
    }

    double twoIntercept (double a1, double b1, double a2, double b2, double c, 
        double m1, double m2, double D1, double D2) const {
      double aux1 = sqrt(D1)/(2*a1);
      double aux2 = sqrt(D2)/(2*a2);
      double x1a = -b1/(2*a1) + aux1;
      double x1b = -b1/(2*a1) - aux1;
      double x2a = -b2/(2*a2) + aux2;
      double x2b = -b2/(2*a2) - aux2;

      double A = 0.0;
      A += triangleArea(x1a, m1*x1a, x1b, m1*x1b);
      A += triangleArea(x2a, m2*x2a, x2b, m2*x2b);
    }
};

int main () {
  Problem p;

  while (p.read()) {
    p.process();
  }

  return 0;
}
