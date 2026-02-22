#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, i = 0;
        cin >> n;
        vector<long> b(n); // dont declare vector without size!!!
        // input
        while (i < n)
        {
            cin >> b[i];
            i++;
        }

        vector<long> a;
        a.push_back(b[0]);
        //  check condition
        for (i = 1; i < n; i++)
        {
            if (b[i - 1] > b[i])
                a.push_back(1);

            a.push_back(b[i]);
        }
        cout << a.end() - a.begin() << endl;
        for (auto j : a)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}