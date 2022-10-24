#include <iostream>

int main()
{
  int n, k, l, c, d, p, nl, np, num_toasts;
  std::cin >> n >> k >> l >> c >> d >> p >> nl >> np;
  num_toasts = std::min((c * d), ((k * l) / nl));
  num_toasts = std::min(num_toasts, (p / np));
  std::cout << (num_toasts / n) << std::endl;
  return 0;
}
