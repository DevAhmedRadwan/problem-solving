#include <iostream>
#include <math.h>

int main()
{
  int input;
  for (int i = 1; i <= 5; i++)
  {
    for (int j = 1; j <= 5; j++)
    {
      std::cin >> input;
      if (input == 1)
      {
        std::cout << abs(3 - i) + abs(3 - j);
        break;
      }
    }
  }
  return 0;
}