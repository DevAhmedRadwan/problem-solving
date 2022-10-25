#include <iostream>

int main()
{
  int n, max_value = 0, sum = 0;
  std::cin >> n;
  int *arr = new int[n];
  for (int i = 0; i < n; i++)
  {
    std::cin >> arr[i];
    max_value = std::max(max_value, arr[i]);
  }
  for (int i = 0; i < n; i++)
  {
    sum += max_value - arr[i];
  }
  std::cout << sum;
  delete[] arr;
  return 0;
}