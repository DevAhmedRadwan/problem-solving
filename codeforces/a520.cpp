#include <iostream>

int main()
{
  int n, alpha_count[26] = {0};
  std::cin >> n;
  char *pangram = new char[n + 1];
  std::cin >> pangram;
  for (int i = 0; i < n; i++)
  {
    pangram[i] = tolower(pangram[i]);
    alpha_count[(pangram[i] - 'a')] = 1;
  }
  delete pangram;

  for (int i = 0; i < 26; i++)
  {
    if (!alpha_count[i])
    {
      std::cout << "NO";
      return 0;
    }
  }
  std::cout << "YES";
  delete[] pangram;
  return 0;
}
