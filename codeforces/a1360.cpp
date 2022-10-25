#include <iostream>
#include <math.h>

int main()
{
  int t, a, b;
  std::cin >> t;
  for (int j = 0; j < t; j++)
  {
    std::cin >> a >> b;
    std::cout << (int)std::pow(std::max((std::min(a, b) * 2), std::max(a, b)), 2) << std::endl;
  }
  return 0;
}