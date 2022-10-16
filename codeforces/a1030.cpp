#include <iostream>

int main()
{
  int n, temp;
  std::cin >> n;
  for (int i = 0; i < n; i++)
  {
    std::cin >> temp;
    if (temp)
    {
      std::cout << "HARD" << std::endl;
      return 0;
    }
  }
  std::cout << "EASY" << std::endl;
  return 0;
}