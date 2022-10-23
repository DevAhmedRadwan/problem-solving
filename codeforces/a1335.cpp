#include <iostream>

int main()
{
  int t;
  long n;
  std::cin >> t;
  for (int i = 0; i < t; i++)
  {
    std::cin >> n;
    if (n == 1 || n == 2)
      std::cout << 0 << std::endl;
    else if (n % 2)
      std::cout << n / 2 << std::endl;
    else
      std::cout << (n / 2) - 1 << std::endl;
  }
  return 0;
}