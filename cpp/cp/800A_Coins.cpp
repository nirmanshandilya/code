#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        long long n, k;
        cin >> n >> k;

        if (n % 2 == 0) // n is even, always YES
            cout << "yes" << endl;
        else if (n % 2 != 0 && k % 2 == 0) // n is odd, k even: never YES
            cout << "no" << endl;
        else // n odd, k odd; (odd-odd=even):YES
            cout << "yes" << endl;
    }
}