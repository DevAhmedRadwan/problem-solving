#include <iostream>

int main()
{
  int n, k;
  std::cin >> n >> k;
  while (k > 0)
  {
    int rem = n % 10;
    if (rem >= k)
    {
      n -= k;
      break;
    }
    n /= 10;
    k -= (rem + 1);
  }
  std::cout << n << std::endl;
  return 0;
}