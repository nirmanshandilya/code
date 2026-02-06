#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <math.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, totalcount = 0;
        bool consective = false; // count consective '.'
        cin >> n;                // just for loop's upper limit
        string s;                // dont use s[n]
        cin >> s;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '.')
                totalcount++;
        }
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '.' && s[i + 1] == '.' && s[i + 2] == '.')
                consective = true;
        }
        if (consective)
            cout << "2" << endl;
        else
            cout << totalcount << endl;
    }
}