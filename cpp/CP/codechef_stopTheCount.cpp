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
        int n;
        cin >> n;
        string s;
        cin >> s;
        int ones, zeros, win;
        ones = zeros = win = 0;
        for (auto it = s.begin(); it != s.end(); ++it)
        {
            if (*it == '1')
                ones += 1;
            else
                zeros += 1;
            if (ones > zeros)
                win += 1;
        }
        cout << win << endl;
    }
}