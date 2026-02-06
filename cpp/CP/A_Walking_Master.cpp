#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int a, b, c, d, count = 0;
        cin >> a >> b >> c >> d;
        if (b > d) // can only travel quadrant 1 & 2
            cout << "-1" << endl;
        else if (a == c && b == d)
            cout << "0" << endl;
        else if (d - b == c - a) // point lies on same line
            cout << c - a << endl;
        else
        {
            while (b != d)
            {
                a++;
                b++;
                count++;
            }
            if (c > a)
                cout << "-1" << endl;
            else
                cout << count + abs(c - a) << endl;
        }
    }
}