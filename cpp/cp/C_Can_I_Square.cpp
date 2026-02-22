#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        long long n, i, a, sum = 0;
        cin >> n;

        // input nos. and sum
        for (i = 0; i < n; i++)
        {
            cin >> a;
            sum += a;
        }

        // find sqrt with decimals
        long long root = round(sqrtl(sum));

        // root*root must be equal to sum for integer values
        if ((long long)root*root == sum)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}