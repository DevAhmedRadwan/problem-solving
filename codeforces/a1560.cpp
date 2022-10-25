#include <iostream>

int main()
{
  int n, k, cur;
  std::cin >> n;
  for (int i = 0; i < n; i++)
  {
    std::cin >> k;
    cur = 0;
    for (int j = 1; j <= 1666; j++)
    {
      if ((j % 10) != 3 && (j % 3) != 0)
        cur++;
      if (cur == k)
      {
        std::cout << j << std::endl;
        break;
      }
    }
  }
  return 0;
}
