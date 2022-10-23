#include <iostream>

int main()
{
  int n, input, sum = 0, untreated = 0;
  std::cin >> n;
  for (int i = 0; i < n; i++)
  {
    std::cin >> input;
    if (input < 0 && sum > 0)
      sum += input;
    else if (input < 0)
      untreated -= input;
    else
      sum += input;
  }
  std::cout << untreated;
  return 0;
}