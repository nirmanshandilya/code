#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        long n, count = 0, dig = 0;
        cin >> n;
        if (n <= 10) // 1-10 all round numbers
            cout << n << endl;
        else
        {
            while (n)
            {
                count++;
                dig = n % 10;
                n /= 10;
            }
            cout << 10 + 9 * (count - 2) + dig - 1 << endl;
        }
    }
}