#pragma warning disable

int t = int.Parse(Console.ReadLine());

for (int i = 0; i < t; i++)
{
  int v = int.Parse(Console.ReadLine());
  int vp1 = v / 10;
  int vp2 = v - ((v / 10) * 10);
  Console.WriteLine(vp1 + vp2);
}