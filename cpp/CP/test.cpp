#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    long b, g, x, y, n;
    cin >> b >> g >> x >> y >> n;
    if (x + y > n)
      cout << "-1" << endl;
    else
      cout << (b + g) / n << endl;
  }
}
