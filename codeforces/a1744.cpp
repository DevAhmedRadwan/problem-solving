#include <iostream>

void solve()
{
  int n;
  std::cin >> n;
  char dict[51] = {0};
  int *int_letters = new int[n];
  char *char_letters = new char[n + 1];
  for (int i = 0; i < n; i++)
  {
    std::cin >> int_letters[i];
  }
  std::cin >> char_letters;
  for (int i = 0; i < n; i++)
  {
    if (dict[int_letters[i]] == 0)
      dict[int_letters[i]] = char_letters[i];
    else if (dict[int_letters[i]] != char_letters[i])
    {
      std::cout << "NO" << std::endl;
      return;
    }
  }
  std::cout << "YES" << std::endl;
  delete[] int_letters;
  delete[] char_letters;
  return;
}

int main()
{
  int t;
  std::cin >> t;
  for (int i = 0; i < t; i++)
  {
    solve();
  }
  return 0;
}