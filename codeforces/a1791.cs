#pragma warning disable

int t = int.Parse(Console.ReadLine());

for (int i = 0; i < t; i++)
{
  char c = char.Parse(Console.ReadLine());
  Console.WriteLine("codeforces".Contains(c) ? "YES" : "NO");
}
