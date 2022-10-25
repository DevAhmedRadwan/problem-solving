#include <iostream>

int main()
{
  int n, count, max = 0;
  char current[2];
  std::cin >> n;
  char *s = new char[n + 1];
  std::cin >> s;
  current[0] = s[0];
  current[1] = s[1];
  for (int i = 0; i < n - 1; i++)
  {
    count = 0;
    for (int j = i + 1; j < n - 1; j++)
    {
      if (s[i] == s[j] && s[i + 1] == s[j + 1])
      {
        count++;
      }
    }
    if (max < count)
    {
      current[0] = s[i];
      current[1] = s[i + 1];
      max = count;
    }
  }
  std::cout << current[0] << current[1];
  delete[] s;
  return 0;
}