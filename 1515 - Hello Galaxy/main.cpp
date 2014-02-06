#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

using namespace std;

void process(int n) {
  string first_name;
  int first_year, first_time;
  int first_send = 2114;

  for (int i = 0; i < n; i++) {
    string name;
    int y, t;
    cin >> name >> y >> t;
    int s = y - t;
    if (s < first_send) {
      first_name = name;
      first_send = s;
      first_year = y;
      first_time = t;
    }
  }
  cout << first_name << endl;
}

int main () {
  int n;
  cin >> n;
  while (n > 0) {
    process(n);
    cin >> n;
  }
  return 0;
}
