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
        // if 1st and last equal
        // if (s.begin() == s.end())
        //     cout << "yes" << endl;
        // freq array
        int freq[26] = {0};
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'a')
                freq[0]++;
            if (s[i] == 'b')
                freq[1]++;
            if (s[i] == 'c')
                freq[2]++;
            if (s[i] == 'd')
                freq[3]++;
            if (s[i] == 'e')
                freq[4]++;
            if (s[i] == 'f')
                freq[5]++;
            if (s[i] == 'g')
                freq[6]++;
            if (s[i] == 'h')
                freq[7]++;
            if (s[i] == 'i')
                freq[8]++;
            if (s[i] == 'j')
                freq[9]++;
            if (s[i] == 'k')
                freq[10]++;
            if (s[i] == 'l')
                freq[11]++;
            if (s[i] == 'm')
                freq[12]++;
            if (s[i] == 'n')
                freq[13]++;
            if (s[i] == 'o')
                freq[14]++;
            if (s[i] == 'p')
                freq[15]++;
            if (s[i] == 'q')
                freq[16]++;
            if (s[i] == 'r')
                freq[17]++;
            if (s[i] == 's')
                freq[18]++;
            if (s[i] == 't')
                freq[19]++;
            if (s[i] == 'u')
                freq[20]++;
            if (s[i] == 'v')
                freq[21]++;
            if (s[i] == 'w')
                freq[22]++;
            if (s[i] == 'x')
                freq[23]++;
            if (s[i] == 'y')
                freq[24]++;
            if (s[i] == 'z')
                freq[25]++;
        }
        bool two = false;
        for (int i = 0; i < 26; i++)
        {
            if (freq[i] == 2)
                two = true;
        }
        if (two)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
}