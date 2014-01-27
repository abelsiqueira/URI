#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <string>

using namespace std;

char digit_hex (int x) {
  if (x >= 0 && x < 10)
    return x+'0';
  else if (x < 16) 
    return x-10+'A';
  else
    return '!';
}

string tohex (int x) {
  string aux;
  while (x > 0) {
    aux = digit_hex(x%16) + aux;
    x /= 16;
  }
  return aux;
}

int main () {
  char str[50];
  int x;

  cin >> str;
  while (true) {
    x = strtol(str, 0, 10);
    if (x < 0)
      return 0;
    if (str[1] == 'x') {
      cout << strtol(str, 0, 16) << endl;
    } else {
      cout << "0x" << tohex(x) << endl;
    }
    cin >> str;
  }

  return 0;
}
