#include <iostream>

int main()
{
  int n, magnet, last_r = -1, groups_count = 0;
  std::cin >> n;
  for (int i = 0; i < n; i++)
  {
    std::cin >> magnet;
    if (last_r == -1 || last_r == (magnet / 10))
      groups_count++;
    last_r = magnet % 10;
  }
  std::cout << groups_count << std::endl;
  return 0;
}