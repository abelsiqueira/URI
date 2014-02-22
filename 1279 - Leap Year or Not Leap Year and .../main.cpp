#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main () {
  int year;

  while (cin >> year) {
    bool leap = false;
    bool huc = false;
    bool bul = false;

    if (year%4 == 0 && (year%100 != 0 || year%400 == 0)) {
      leap = true;
      cout << "This is leap year." << endl;
    }

    if (year%15 == 0) {
      huc = true;
      cout << "This is huluculu festival year." << endl;
    }

    if (leap && year%55 == 0) {
      bul = true;
      cout << "This is huluculu festival year." << endl;
    }
  }

  return 0;
}
