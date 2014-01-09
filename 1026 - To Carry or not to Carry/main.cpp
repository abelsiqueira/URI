#include <iostream>

int main () {
  unsigned int a, b;
  while (std::cin >> a >> b) {
    a = a ^ b;
    std::cout << a << std::endl;
  }

  return 0;
}
