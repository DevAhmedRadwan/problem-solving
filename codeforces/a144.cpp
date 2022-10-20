#include <iostream>

int main()
{
  int n, min_index = 0, max_index = 0, seconds = 0;
  std::cin >> n;
  int *arr = new int[n];
  for (int i = 0; i < n; i++)
  {
    std::cin >> arr[i];
    if (arr[i] > arr[max_index] || (arr[i] == arr[max_index] && max_index > i))
      max_index = i;
    if (arr[i] < arr[min_index] || (arr[i] == arr[min_index] && min_index < i))
      min_index = i;
  }
  if (min_index < max_index)
    seconds = -1;
  seconds += max_index;
  seconds += n - min_index - 1;
  std::cout << seconds;
  return 0;
}
