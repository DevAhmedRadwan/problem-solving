#include <iostream>

int main()
{
  int n, input_a, input_b, mod;
  std::cin >> n;
  for (int i = 0; i < n; i++)
  {
    std::cin >> input_a >> input_b;
    mod = input_a % input_b;
    if (mod)
      std::cout << input_b - mod;
    else
      std::cout << 0;
    std::cout << std::endl;
  }
  return 0;
}
