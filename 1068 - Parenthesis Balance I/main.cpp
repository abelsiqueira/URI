#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

using namespace std;

string process (string str) {
  int open = 0, close = 0;
  for (int i = 0; i < str.length(); i++) {
    if (str[i] == '(')
      open++;
    else if (str[i] == ')')
      close++;
    if (close > open)
      return "incorrect";
  }

  if (open != close)
    return "incorrect";
  else
    return "correct";
}

int main () {
  string str;

  while (getline(cin, str)) {
    cout << process(str) << endl;
  }

  return 0;
}
