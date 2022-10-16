#include <iostream>
#include <math.h>

int main()
{
  long long n, ret;
  std::cin >> n;
  ret = (n / 2);
  if (n % 2)
    ret -= n;
  std::cout << ret << std::endl;
  return 0;
}