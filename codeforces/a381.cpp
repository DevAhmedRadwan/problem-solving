#include <iostream>

int main()
{
  int n, m, se = 0, di = 0;
  std::cin >> n;
  int *arr = new int[n];
  for (int i = 0; i < n; i++)
  {
    std::cin >> arr[i];
  }
  for (int k = 0, s = 0, e = (n - 1); k < n; k++)
  {
    m = std::max(arr[s], arr[e]);
    if (arr[s] >= arr[e])
      s++;
    else
      e--;
    if (k % 2 == 0)
      se += m;
    else
      di += m;
  }
  std::cout << se << " " << di;
  delete[] arr;
  return 0;
}
