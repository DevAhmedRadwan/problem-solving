#include <iostream>

int main()
{
  int alpha_count[26] = {0};
  std::string input;

  getline(std::cin, input);
  for (int i = 0; i < input.size(); i++)
  {
    alpha_count[input[i] - 'A']++;
  }

  getline(std::cin, input);
  for (int i = 0; i < input.size(); i++)
  {
    alpha_count[input[i] - 'A']++;
  }

  getline(std::cin, input);
  for (int i = 0; i < input.size(); i++)
  {
    alpha_count[input[i] - 'A']--;
  }

  for (int i = 0; i < 26; i++)
  {
    if (alpha_count[i] != 0)
    {
      std::cout << "NO";
      return 0;
    }
  }

  std::cout << "YES";
  return 0;
}