#include <iostream>
#include <algorithm>
#include <climits>

int main()
{
  int n, m, max_diff = INT_MAX;
  std::cin >> n >> m;
  int *arr = new int[m];
  for (int i = 0; i < m; i++)
  {
    std::cin >> arr[i];
  }
  std::sort(arr, arr + m);
  for (int i = 0; i <= m - n; i++)
  {
    max_diff = std::min(max_diff, arr[i + n - 1] - arr[i]);
  }
  std::cout << max_diff;
  delete[] arr;
  return 0;
}
