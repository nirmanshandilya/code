#include <bits/stdc++.h>
using namespace std;

void solve()
{
    // %%%%%%%%%% USE THE SIMPLER APPROACH %%%%%%%%%%
    long long n;
    cin >> n;
    if (n < 4)
    {
        cout << "-1\n";
        return;
    }
    bool divby4 = false, divby6 = false;
    if (!(n % 4))
        divby4 = true;
    if (!(n % 6))
        divby6 = true;

    // when div by both
    if (divby4 == true && divby6 == true)
        cout << n / 6 << " " << n / 4 << "\n";

    // if div only by 4
    else if (divby4 == true && divby6 == false)
    {
        long long max_val = n / 4, min_val = 0;
        if ((n % 6) % 2 != 0)
        {
            cout << "-1\n";
            return;
        }
        else
        {
            min_val = n / 6 + 1;
            cout << min_val << " " << max_val << "\n";
        }
    }
    // if div only by 6
    else if (divby4 == false && divby6 == true)
    {
        long long minval = n / 6, maxval;
        if ((n % 4) % 2 != 0)
        {
            cout << "-1\n";
            return;
        }
        else
        {
            maxval = n / 4;
            cout << minval << " " << maxval << "\n";
        }
    }

    // when div by none
    else
    {
        long long mini = 0, maxi = 0;
        // if any remainder ODD then -1
        if ((n % 6) % 2 != 0 || (n % 4) % 2 != 0)
        {
            cout << "-1\n";
            return;
        }
        else
        {
            mini = n / 6 + 1;
            maxi = n / 4;
            cout << mini << " " << maxi << "\n";
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}