

#include <iostream>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, i, spaces = 0, zeros = 0;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] == 1)
                zeros = 0;
            else
            {
                zeros++;
                if (spaces < zeros)
                    spaces = zeros;
            }
        }
        cout << spaces << endl;
    }
}