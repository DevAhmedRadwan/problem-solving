#include <iostream>

int main()
{
  int n, input, even_num_index = -1, odd_num_index = -1;
  std::cin >> n;
  for (int i = 1; i <= n; i++)
  {
    std::cin >> input;
    if (even_num_index != -1 && odd_num_index != -1)
    {
      if ((input % 2) == 0)
        std::cout << odd_num_index;
      if ((input % 2) == 1)
        std::cout << even_num_index;
      return 0;
    }
    if ((input % 2) == 0)
      even_num_index = i;
    if ((input % 2) == 1)
      odd_num_index = i;
  }
  std::cout << n;
  return 0;
}
