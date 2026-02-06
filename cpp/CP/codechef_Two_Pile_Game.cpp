#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int x, y;
        cin >> x >> y;

        if (y == 0 && x > 0)
        {
            if (x % 2 == 0)
                cout << "Bob" << endl;
            else
                cout << "Alice" << endl;
        }

        else if (x == 0 && y > 0)
            cout << "Bob" << endl;

        else
        {
            if (x % 2 != 0 && y % 2 != 0)
                cout << "Alice" << endl;
            else if (x % 2 == 0 && y % 2 == 0)
                cout << "Bob" << endl;
            else if (x % 2 != 0 && y % 2 == 0)
                cout << "Alice" << endl;
            else
                cout << "Bob" << endl;
        }
    }
}