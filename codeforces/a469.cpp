#include <iostream>

int main()
{
  int n, k, input, sum = 0;
  std::cin >> n;
  int *levels = new int[n]{0};
  for (int i = 0; i < 2; i++)
  {
    std::cin >> k;
    for (int j = 0; j < k; j++)
    {
      std::cin >> input;
      levels[input - 1] = 1;
    }
  }

  for (int i = 0; i < n; i++)
  {
    sum += levels[i];
  }

  if (sum == n)
    std::cout << "I become the guy.\n";
  else
    std::cout << "Oh, my keyboard!\n";
  delete[] levels;
  return 0;
}