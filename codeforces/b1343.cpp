#include <iostream>

int main()
{
  int t, n, half, sum;
  std::cin >> t;
  for (int i = 0; i < t; i++)
  {
    std::cin >> n;
    half = n / 2;
    if ((half % 2) == 0)
    {
      sum = 0;
      std::cout << "YES\n";
      for (int j = 1; j <= half; j++)
      {
        std::cout << j * 2 << " ";
        sum += (j * 2);
      }
      for (int j = 1; j <= half; j++)
      {
        if (j < half)
        {
          std::cout << (j * 2) - 1 << " ";
          sum -= ((j * 2) - 1);
        }
        else
        {
          std::cout << sum << std::endl;
        }
      }
    }
    else
      std::cout << "NO\n";
  }
  return 0;
}
