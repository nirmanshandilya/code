#include <iostream>
using namespace std;
int main()
{
    string s, s1;
    s1 = "codeforces";
    int tc;
    cin >> tc;
    while (tc--)
    {
        int count = 0;
        cin >> s;
        for (int i = 0; i < 10; i++)
        {
            if (s1[i] != s[i])
                count++;
            else
                continue;
        }
        cout << count << endl;
    }
}