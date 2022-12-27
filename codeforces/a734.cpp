#include <iostream>

int main()
{
  int n, a_sum = 0, d_sum = 0;
  char input;
  std::cin >> n;
  for (int i = 0; i < n; i++)
  {
    std::cin >> input;
    if (input == 'A')
      a_sum++;
    else
      d_sum++;
  }
  if (a_sum > d_sum)
    std::cout << "Anton";
  else if (a_sum < d_sum)
    std::cout << "Danik";
  else
    std::cout << "Friendship";
  return 0;
}
