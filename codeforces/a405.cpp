#include <iostream>

int main()
{
  int n;
  std::cin >> n;
  int* arr = new int[n];
  for (int i = 0; i < n; i++)
  {
    std::cin >> arr[i];
  }
  // bubble sort
  int temp = 0;
  bool sorted = false;
  while(!sorted)
  {
    sorted = true;
    for (int i = 0; i < n-1; i++)
    {
      if(arr[i] > arr[i+1]){
        temp = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = temp;
        sorted = false;
      }
    }
  }
  for (int i = 0; i < n; i++)
  {
    std::cout << arr[i] << ' ';
  }
  return 0;
}