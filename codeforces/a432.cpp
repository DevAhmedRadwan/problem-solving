#include <iostream>

int main()
{
  int n, k, sum = 0, input;
  std::cin >> n >> k;
  for (int i = 0; i < n; i++)
  {
    std::cin >> input;
    if ((input + k) <= 5)
      sum++;
  }
  std::cout << sum / 3;
  return 0;
}
