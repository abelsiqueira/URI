#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstring>

using namespace std;

const int diff = 'a' - 'A';

char toLower (char c) {
  if (c >= 'a')
    return c;
  else
    return c + diff;
}

char toUpper (char c) {
  if (c <= 'Z')
    return c;
  else
    return c - diff;
}

int main () {
  char str[100];

  while (cin.getline(str, 50)) {
    bool upper = true;
    int n = strlen(str);
    for (int i = 0; i < n; i++) {
      if (str[i] != ' ') {
        if (upper)
          str[i] = toUpper(str[i]);
        else
          str[i] = toLower(str[i]);
        upper = !upper;
      }
    }
    cout << str << endl;
  }

  return 0;
}
