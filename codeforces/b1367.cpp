#include <iostream>

int main()
{
  int t, n, input, o_sum, e_sum;
  std::cin >> t;
  for (int j = 0; j < t; j++)
  {
    o_sum = 0;
    e_sum = 0;
    std::cin >>
        n;
    for (int i = 0; i < n; i++)
    {
      std::cin >> input;
      if ((input % 2) != (i % 2))
      {
        if (input % 2)
          e_sum++;
        else
          o_sum++;
      }
    }
    if (e_sum == o_sum)
      std::cout << e_sum << std::endl;
    else
      std::cout << -1 << std::endl;
  }
  return 0;
}
