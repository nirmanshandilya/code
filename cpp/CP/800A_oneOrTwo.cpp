#include <iostream>
#include <algorithm>
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
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int twos = 0;

        // no. of twos in array
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 2)
                twos++;
        }
        //if all 1's in array
        if (twos == 0)
            cout << "1" << endl;

        // even-odd condition
        if (twos % 2 != 0)
            cout << "-1" << endl;
        else
        {
            int curr_twos = 0;
            for (int i = 0; i < n; i++)
            {
                if (a[i] == 2)
                {
                    curr_twos++;
                    if (curr_twos == twos / 2)
                        cout << i + 1 << endl;
                }
            }
        }
    }
}