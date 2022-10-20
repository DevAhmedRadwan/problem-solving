#include <iostream>

int main()
{
  std::string s;
  std::getline(std::cin, s);
  int char_index, sum = 0;
  bool alpha_visited[26] = {0};
  for (int i = 0; i < s.size(); i++)
  {
    char_index = (s[i] - 'a');
    if (char_index >= 0 && char_index < 26 && !alpha_visited[char_index])
    {
      sum++;
      alpha_visited[char_index] = true;
    }
  }
  std::cout << sum;
  return 0;
}
