#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstring>

using namespace std;

int main () {
  char digit;
  char str[200];
  cin >> digit >> str;
  while (digit != '0') {
    size_t n = strlen(str);
    for (size_t i = 0; i < n; i++) {
      if (str[i] == digit) {
        for (size_t j = i; j < n; j++)
          str[j] = str[j+1];
        str[n-1] = 0;
        n--;
        i--;
      }
    }

    for (size_t i = 0; i < n-1; i++) {
      if (str[i] == '0') {
        for (size_t j = i; j < n; j++)
          str[j] = str[j+1];
        str[n-1] = 0;
        n--;
        i--;
      } else {
        break;
      }
    }

    if (n == 0) {
      str[0] = '0';
      str[1] = 0;
    }

    cout << str << endl;
    cin >> digit >> str;
  }
  return 0;
}
