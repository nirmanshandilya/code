/*
    1234554321
    1234**4321
    123****321
    12******21
    1********1
*/

#include <iostream>
using namespace std;
int main()
{
  int i, j, k, l, row;
  cout << "how many rows: ";
  cin >> row;
  for (i = 1; i <= row; i++)
  {

    // 1st num traingle
    for (j = 1; j <= row - i + 1; j++)
    {
      cout << j;
    }

    // 2nd * triangle
    for (k = 1; k <= (i * 2 - 2); k++)
    {
      cout << "*";
    }

    // 3rd num traingle
    for (l = row - i + 1; l > 0; l--)
    {
      cout << l;
    }

    cout << endl;
  }
}