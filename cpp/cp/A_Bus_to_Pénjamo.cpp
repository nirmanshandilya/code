#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, r;
        cin >> n >> r;
        int a, rowsSpent = 0, remPeople = 0, remRows;
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            rowsSpent += (a / 2) * 2;
            remPeople += a % 2;
        }
        remRows = r - (rowsSpent / 2);
        int happy = 0;
        if (remRows >= remPeople)
            happy = remPeople;
        else
        {
            happy = remPeople - ((remPeople - remRows) * 2);
        }
        cout << rowsSpent + happy << "\n";
    }
}