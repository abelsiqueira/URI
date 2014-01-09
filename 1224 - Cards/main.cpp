#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int take(int *, int);
int pass(int *, int);

int pass (int *cards, int n) {
  if (n == 1)
    return 0;
  int left, right;
  int *prox = cards;
  prox++;

  left = take(prox, n-1);
  right = take(cards, n-1);

  if (left >= right)
    return right;
  else
    return left;
}

int take (int *cards, int n) {
  if (n == 1)
    return cards[0];
  int left, right;
  int *prox = cards;
  prox++;

  left = cards[0] + pass(prox, n-1);
  right = cards[n-1] + pass(cards, n-1);

  if (left >= right)
    return left;
  else
    return right;
}

void process (int cards[], int n) {
  cout << take(cards, n) << endl;
}

int main () {
  int n;

  while (cin >> n) {
    int cards[n];
    for (int i = 0; i < n; i++)
      cin >> cards[i];
    process(cards, n);
  }

  return 0;
}
