#include <iostream>

int main()
{
  int n, input;
  int sum_m = 0, sum_p = 0, sum_s = 0, min_sum;
  int arr_m[5001] = {0}, arr_p[5001] = {0}, arr_s[5001] = {0};
  std::cin >> n;
  for (int i = 0; i < n; i++)
  {
    std::cin >> input;
    switch (input)
    {
    case 1:
      arr_p[sum_p] = i + 1;
      sum_p++;
      break;
    case 2:
      arr_m[sum_m] = i + 1;
      sum_m++;
      break;
    case 3:
      arr_s[sum_s] = i + 1;
      sum_s++;
      break;
    }
  }
  min_sum = std::min(sum_p, std::min(sum_m, sum_s));
  std::cout << min_sum << std::endl;
  for (int i = 0; i < min_sum; i++)
  {
    std::cout << arr_p[i] << " " << arr_m[i] << " " << arr_s[i] << std::endl;
  }
  return 0;
}