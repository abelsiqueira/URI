#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

using namespace std;

string process (string str) {
  for (int i = 0; i < str.length(); i++) {
    if (isalpha(str[i])) {
      str[i] = str[i]+3;
    }
    if (i < (str.length()+1)/2)
      str[i] = str[i]-1;
  }
  for (int i = 0; i < str.length()/2; i++) {
    char t = str[i];
    str[i] = str[str.length()-i-1];
    str[str.length()-i-1] = t;
  }
  return str;
}

int main () {
  int n;
  string aux;
  cin >> n;

  cin.get();
  for (int i = 0; i < n; i++) {
    getline(cin, aux);
    cout << process(aux) << endl;
  }

  return 0;
}
