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
        int n, k;
        cin >> n >> k; // n=no. of boxes, k=subarray size
        int a[n];
        // number on each box
        for (int i = 0; i < n; i++)
            cin >> a[i];
        // YES condition
        if (k >= 2)
            cout << "YES" << endl;
        else
        {
            int count = 0;
            for (int i = 0; i < n - 1; i++)
            {
                if (a[i] > a[i + 1])
                    count++;
            }
            if (count > 0) // unsorted condition
                cout << "NO" << endl;
            else
                cout << "YES" << endl;
        }
    }
}