#include <iostream>
#include <map>

int main()
{
  std::map<std::string, int> shapes = {
      {"Tetrahedron", 4},
      {"Cube", 6},
      {"Octahedron", 8},
      {"Dodecahedron", 12},
      {"Icosahedron", 20}};

  int n, result = 0;
  std::string input;
  std::cin >> n;
  std::cin.get();

  for (int i = 0; i < n; i++)
  {
    getline(std::cin, input);
    result += shapes[input];
  }

  std::cout << result;
  return 0;
}
