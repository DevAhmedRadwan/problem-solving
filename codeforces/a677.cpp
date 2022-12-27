#include <iostream>

int main()
{
  int n, h, input, width = 0;
  std::cin >> n >> h;
  for (int i = 0; i < n; i++)
  {
    std::cin >> input;
    if (input > h)
    {
      width += 1;
    }
    width += 1;
  }
  std::cout << width;
  return 0;
}
