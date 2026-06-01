#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, xor1 = 0, xor2 = 0;
  cin >> n;
  bool prime = true;
  for (int i = 2; i <= n / 2; i++)
  {
    if (n % i == 0)
    {
      prime = false;
      break;
    }
  }
  prime ? cout << "prime\n" : cout << "notPrime\n";
}
