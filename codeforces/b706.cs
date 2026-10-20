#pragma warning disable

int n = int.Parse(Console.ReadLine());
int[] prices = Array.ConvertAll(Console.ReadLine().Split(' '), int.Parse);
Array.Sort(prices);
int q = int.Parse(Console.ReadLine());


for (int i = 0; i < q; i++)
{
  int count = 0;
  int m = int.Parse(Console.ReadLine());

  for (int j = 0; j < n; j++)
  {
    if (prices[j] <= m)
    {
      count++;
    }
  }
  Console.WriteLine(count);
}

int count(int startIndex, int endIndex, int[] prices, int m)
{
  if (startIndex == endIndex)
  {
    if (prices[startIndex] <= m)
    {
      return startIndex + 1;
    }
    else
    {
      return startIndex;
    }
  }

  int splitIndex = (startIndex + endIndex) / 2;

  if (m >= prices[splitIndex])
  {

  }
}