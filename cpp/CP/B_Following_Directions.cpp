#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int x = 0, y = 0;
        bool candy = false;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'L')
                x -= 1;
            else if (s[i] == 'R')
                x += 1;
            else if (s[i] == 'U')
                y += 1;
            else
                y -= 1;

            if (x == 1 && y == 1)
            {
                candy = true;
                break;
            }
        }
        if (candy)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}