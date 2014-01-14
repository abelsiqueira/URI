#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int maximum_cards (int cards1[], int cards2[], int n1, int n2) {
  int N = 0;
  for (int i = 0; i < n1; i++) {
    if (i < n1-1 && cards1[i] == cards1[i+1])
      continue;
    int j;
    for (j = 0; j < n2; j++) {
      if (cards2[j] == cards1[i])
        break;
      else if (cards2[j] > cards1[i]) {
        N++;
        break;
      }
    }
    if (j == n2)
      N++;
  }
  return N;
}

int main () {
  int a, b;
  cin >> a >> b;

  int cards_a[10000];
  int cards_b[10000];

  while (a != 0 || b != 0) {
    for (int i = 0; i < a; i++)
      cin >> cards_a[i];
    for (int i = 0; i < b; i++)
      cin >> cards_b[i];

    int max_a, max_b;

    max_a = maximum_cards(cards_a, cards_b, a, b);
    max_b = maximum_cards(cards_b, cards_a, b, a);

    if (max_a < max_b)
      cout << max_a << endl;
    else
      cout << max_b << endl;

    cin >> a >> b;
  }
  return 0;
}
