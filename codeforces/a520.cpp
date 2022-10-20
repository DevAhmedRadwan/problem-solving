#include <iostream>

int main()
{
  int n, alpha_count[26] = {0};
  std::cin >> n;
  char *program = new char[n + 1];
  std::cin >> program;
  for (int i = 0; i < n; i++)
  {
    program[i] = tolower(program[i]);
    alpha_count[(program[i] - 'a')] = 1;
  }
  delete program;

  for (int i = 0; i < 26; i++)
  {
    if (!alpha_count[i])
    {
      std::cout << "NO";
      return 0;
    }
  }
  std::cout << "YES";
  return 0;
}
