#include <iostream>
#include <math.h>

int main()
{
  int t, a, b;
  std::cin >> t;
  for (int i = 0; i < t; i++)
  {
    std::cin >> a >> b;
    std::cout << (long)(ceil(abs((b - a)) / 10.0)) << std::endl;
  }
  return 0;
}
