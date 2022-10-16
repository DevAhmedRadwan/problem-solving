#include <iostream>
#include <set>

int main()
{
  int n;
  std::set<int> n_set;
  for (int i = 0; i < 4; i++)
  {
    std::cin >> n;
    n_set.insert(n);
  }
  std::cout << 4 - n_set.size() << std::endl;
  return 0;
}