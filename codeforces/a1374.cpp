#include <iostream>

int main()
{
  int t, x, y, n;
  std::cin >> t;
  for (int i = 0; i < t; i++)
  {
    std::cin >> x >> y >> n;
    if ((((n / x) * x) + y) <= n)
      std::cout << (((n / x) * x) + y) << std::endl;
    else
      std::cout << ((((n / x) * x) - x) + y) << std::endl;
  }
  return 0;
}
