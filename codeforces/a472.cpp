#include <iostream>

int main()
{
  int n;
  std::cin >> n;
  if (n == 12)
    std::cout << 6 << " " << 6;
  else if (n % 2 == 0)
    std::cout << 8 << " " << (n - 8);
  else
    std::cout << 9 << " " << (n - 9);
  return 0;
}
