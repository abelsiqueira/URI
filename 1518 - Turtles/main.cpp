#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int calc(int x, int y, Turtle *turtles,
    int a, int b, int c) {
  int t = 0;
  Turtle *tr = &turtles[a];
  if ( (tr->d == 'C' &&
        y < tr->y) ||
       (ty->d == 'D' &&
        x < tr->x) ) {

  }
}

class Turtle () {
  public:
    Turtle () : x(0), y(0), d(0) {}
    ~Turtle () {}

    Turtle.cin () {
      cin >> x >> y >> d;
    }

    int xat (int t) const {
      if (d == 'C')
        return x;
      else if (d == 'D')
        return x+t;
      else
        return 0;
    }
    int yat (int t) const {
      if (d == 'C')
        return y+t;
      else if (d == 'D')
        return y;
      else
        return 0;
    }

    int x, y;
    char d;
}

int main () {
  int x, y;
  Turtle turtles[3];
  cin >> x >> y;
  while (x != 0) {
    for (int i = 0; i < 3; i++)
      turtles[i].cin();
    cin >> x >> y;
  }

  int time[6];
  time[0] = calc(x, y, turtles, 1, 2, 3);
  time[1] = calc(x, y, turtles, 1, 3, 2);
  time[2] = calc(x, y, turtles, 2, 1, 3);
  time[3] = calc(x, y, turtles, 2, 3, 1);
  time[4] = calc(x, y, turtles, 3, 1, 2);
  time[5] = calc(x, y, turtles, 3, 2, 1);

  int min = time[0];
  for (int i = 1; i < 6; i++)
    if (time[i] < min)
      min = time[i];

  return 0;
}
