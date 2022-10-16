#include <iostream>

int main()
{
  int n, p, v, t, ret = 0;
  std::cin >> n;
  for (int i = 0; i < n; i++)
  {
    std::cin >> p >> v >> t;
    if ((p + v + t) >= 2)
      ret++;
  }
  std::cout << ret << std::endl;
  return 0;
}