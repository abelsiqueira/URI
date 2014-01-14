#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstring>

using namespace std;

void unscramble (char *str, int size) {
  for (int i = 0; i < size/2; i++) {
    char t = str[i];
    str[i] = str[size-1-i];
    str[size-1-i] = t;
  }
  for (int i = 0; i < size; i++)
    cout << str[i];
}

int main () {
  int n;

  cin >> n;
  cin.get();
  for (int i = 0; i < n; i++) {
    char str[200];
    cin.getline(str, 100);
    int size = strlen(str);

    unscramble(str, size/2);
    unscramble(str+(size+1)/2, size/2);

    cout << endl;
  }

  return 0;
}
