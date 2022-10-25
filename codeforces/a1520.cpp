#include <iostream>

int main()
{
  int t, n;
  bool yes;
  std::string s;
  std::cin >> t;
  for (int j = 0; j < t; j++)
  {
    yes = true;
    std::cin >> n;
    std::cin.get();
    int arr[26] = {0};
    getline(std::cin, s);
    arr[s[0] - 'A']++;
    for (int i = 1; i < n; i++)
    {
      if (s[i] != s[i - 1] && arr[s[i] - 'A'] == 0)
      {
        arr[s[i] - 'A']++;
      }
      else if (s[i] != s[i - 1])
      {
        std::cout << "NO" << std::endl;
        yes = false;
        break;
      }
    }
    if (yes)
      std::cout << "YES" << std::endl;
  }
  return 0;
}