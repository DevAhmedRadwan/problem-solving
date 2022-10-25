#include <iostream>

void merge(int *arr, int s_index, int middle, int e_index)
{
  int len = e_index - s_index + 1;
  int a_len = middle - s_index + 1;
  int b_len = e_index - middle;
  int *a_arr = new int[a_len];
  int *b_arr = new int[b_len];
  for (int i = 0; i < a_len; i++)
  {
    a_arr[i] = arr[s_index + i];
  }
  for (int i = 0; i < b_len; i++)
  {
    b_arr[i] = arr[middle + 1 + i];
  }
  for (int i = 0, a = 0, b = 0; i < len; i++)
  {
    if (b >= b_len || (a < a_len && a_arr[a] <= b_arr[b]))
      arr[s_index + i] = a_arr[a++];
    else if (b < b_len)
      arr[s_index + i] = b_arr[b++];
  }
  delete[] a_arr;
  delete[] b_arr;
}

void merge_sort(int *arr, int s_index, int e_index)
{
  if (s_index >= e_index)
    return;
  int middle = s_index + ((e_index - s_index) / 2);
  merge_sort(arr, s_index, middle);
  merge_sort(arr, middle + 1, e_index);
  merge(arr, s_index, middle, e_index);
}

int main()
{
  int n, k, count = 0;
  std::cin >> n >> k;
  int *arr = new int[n];
  for (int i = 0; i < n; i++)
  {
    std::cin >> arr[i];
  }
  merge_sort(arr, 0, n - 1);
  if (k == 0 && arr[0] > 1)
  {
    std::cout << 1;
    return 0;
  }
  else if (k == n || (k > 0 && arr[k - 1] < arr[k]))
  {
    std::cout << arr[k - 1];
    return 0;
  }
  std::cout << -1;
  delete[] arr;
  return 0;
}