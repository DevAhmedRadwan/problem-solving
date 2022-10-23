#include <iostream>

int main()
{
  int t;
  std::cin >> t;
  for (int i = 0; i < t; i++)
  {
    int input, count = 0, values[4], position = 1;
    std::cin >> input;
    while (input)
    {
      values[count] = (input % 10) * position;
      if (input % 10 != 0)
      {
        count++;
      }
      position *= 10;
      input /= 10;
    }
    std::cout << count << std::endl;
    for (int j = 0; j < count; j++)
    {
      if (j != 0)
        std::cout << " ";
      std::cout << values[j];
    }
    std::cout << std::endl;
  }
  return 0;
}