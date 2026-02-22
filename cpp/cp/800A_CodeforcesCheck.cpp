#include <iostream>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        string str = "codeforces";
        char ch;
        cin >> ch;
        bool found = false;
        for (int i = 0; i < 10; i++)
        {
            if (str[i] == ch)
                found = true;
        }
        if (found)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}