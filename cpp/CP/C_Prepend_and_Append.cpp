#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, i, j;
        cin >> n;
        string s;
        cin >> s;
        i = 0;     // start pointer
        j = n - 1; // end pointer
        while (i < j && s[i] != s[j])
        {
            i++;
            j--;
        }
        if (s[i] == s[j])
            cout << j - i + 1 << endl;
        else
            // when i crossed j, means string did not exist
            cout << "0" << endl;
    }
}