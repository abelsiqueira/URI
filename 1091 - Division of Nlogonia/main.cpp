#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

class Point {
  public:
    int x, y;

    void read () {
      cin >> x >> y;
    }
};

int main () {
  int n;
  cin >> n;

  Point division;
  Point house;

  while (n != 0) {
    division.read();
    for (int i = 0; i < n; i++) {
      house.read();
      if (division.x == house.x || division.y == house.y)
        cout << "divisa" << endl;
      else if (house.x > division.x) {
        if (house.y > division.y)
          cout << "NE" << endl;
        else
          cout << "SE" << endl;
      } else {
        if (house.y > division.y)
          cout << "NO" << endl;
        else
          cout << "SO" << endl;
      }
    }
    cin >> n;
  }

  return 0;
}
