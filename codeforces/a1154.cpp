#include <iostream>
#include <algorithm>

int main()
{
  int x[4];
  std::cin >> x[0] >> x[1] >> x[2] >> x[3];
  std::sort(x, x + 4);
  std::cout << (x[3] - x[0]) << " " << (x[3] - x[1]) << " " << (x[3] - x[2]);
  return 0;
}
