#include <iostream>

int main()
{
  int t;
  std::string b, a;
  std::cin >> t;
  std::cin.get();
  for (int j = 0; j < t; j++)
  {
    getline(std::cin, b);
    a = "";
    a.push_back(b[0]);
    for (int i = 1; i < b.size() - 1; i++)
    {
      if (i % 2)
        a.push_back(b[i]);
    }
    a.push_back(b[b.size() - 1]);
    std::cout << a << std::endl;
  }
  return 0;
}
