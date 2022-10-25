#include <iostream>

int main()
{
  int t, n;
  std::cin >> t;
  for (int j = 0; j < t; j++)
  {
    std::cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
      std::cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
      if (
          (i == 0 && arr[i] != arr[i + 1] && arr[i] != arr[i + 2]) ||
          (i == (n - 1) && arr[i] != arr[i - 1] && arr[i] != arr[i - 2]) ||
          (i > 0 && i < (n - 1) && arr[i] != arr[i - 1] && arr[i] != arr[i + 1]))
      {
        std::cout << (i + 1) << std::endl;
        break;
      }
    }
    delete[] arr;
  }
  return 0;
}