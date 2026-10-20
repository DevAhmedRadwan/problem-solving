#include <iostream>

int main()
{
  int n, m;
  std::cin >> n >> m;
  std::cout << n + m - 1 << std::endl;
  for (int i = 1; i <= m; i++)
  {
    std::cout << "1 " << i << std::endl;
  }
  for (int i = 2; i <= n; i++)
  {
    std::cout << i << " 1" << std::endl;
  }
  return 0;
}
