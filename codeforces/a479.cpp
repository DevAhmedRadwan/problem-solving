#include <iostream>

int main()
{
  int a, b, c;
  std::cin >> a >> b >> c;
  std::cout << std::max(a + b + c, std::max((a + b) * c, std::max(a * (b + c), a * b * c)));
  return 0;
}