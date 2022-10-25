#include <iostream>
#include <algorithm>

int main()
{
  int t, n;
  bool yes = true;
  std::cin >> t;
  for (int i = 0; i < t; i++)
  {
    yes = true;
    std::cin >> n;
    int *a = new int[n];
    for (int j = 0; j < n; j++)
    {
      std::cin >> a[j];
    }
    std::sort(a, a + n);
    for (int j = 1; j < n; j++)
    {
      if ((a[j] - a[j - 1]) > 1)
      {
        yes = false;
        break;
      }
    }
    if (yes)
      std::cout << "YES" << std::endl;
    else
      std::cout << "NO" << std::endl;
    delete[] a;
  }
  return 0;
}
