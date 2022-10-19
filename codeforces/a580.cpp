#include <iostream>

int main()
{
  int n, input, last_num = 0, count = 0, max_count = 1;
  std::cin >> n;
  for (int i = 0; i < n; i++)
  {
    std::cin >> input;
    if (last_num <= input)
      count++;
    else
    {
      max_count = std::max(count, max_count);
      count = 1;
    }
    last_num = input;
  }
  std::cout << std::max(count, max_count);
  return 0;
}