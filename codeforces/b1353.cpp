#include <iostream>
#include <algorithm>

int main()
{
  int t, n, k, sum;
  std::cin >> t;
  for (int j = 0; j < t; j++)
  {
    sum = 0;
    std::cin >> n >> k;
    int *a_arr = new int[n];
    int *b_arr = new int[n];
    for (int i = 0; i < n; i++)
    {
      std::cin >> a_arr[i];
    }
    for (int i = 0; i < n; i++)
    {
      std::cin >> b_arr[i];
    }
    std::sort(a_arr, a_arr + n);
    std::sort(b_arr, b_arr + n);
    for (int i = 0; i < n; i++)
    {
      if (a_arr[i] < b_arr[n - i - 1] && k > 0)
      {
        sum += b_arr[n - i - 1];
        k--;
      }
      else
        sum += a_arr[i];
    }
    std::cout << sum << std::endl;
    delete[] a_arr;
    delete[] b_arr;
  }
  return 0;
}
