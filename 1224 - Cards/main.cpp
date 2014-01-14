#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int take(int *, int);
int pass(int *, int);

int pass (int *cards, int n) {
  if (n == 1)
    return 0;
  int *prox = cards;
  prox++;

  bool left = false;

  int L = cards[0], l = cards[1]; 
  int r = cards[n-2], R = cards[n-1];

  if (n == 2) {
    if (L > R)
      return R;
    else
      return L;
  }

  if (l >= r && l > L && l > R)
    left = false;
  else if (R > r && R > l && R > L)
    left = false;

//  for (int i = 0; i < n; i++)
//    cout << cards[i] << ' ';
//  cout << endl;

  if (left)
    return take(prox, n-1);
  else
    return take(cards, n-1);
}

int take (int *cards, int n) {
  if (n == 1)
    return cards[0];
  int *prox = cards;
  prox++;

  bool left = true;

  int L = cards[0], l = cards[1]; 
  int r = cards[n-2], R = cards[n-1];

  if (n == 2) {
    if (L > R)
      return L;
    else
      return R;
  }

  if (l >= r && l > L && l > R)
    left = false;
  else if (R > r && R > l && R > L)
    left = false;

//  for (int i = 0; i < n; i++)
//    cout << cards[i] << ' ';
//  cout << endl;

  if (left)
    return L + pass(prox, n-1);
  else
    return R + pass(cards, n-1);
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
