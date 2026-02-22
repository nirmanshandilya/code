#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, a;
        cin >> n;

        // array input
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        // all elem same condition; max == min
        if (max_element(arr, arr + n) == min_element(arr, arr + n))
            cout << "NO" << endl;
        else
        {
            // line01: YES
            cout << "YES" << endl;

            // any arrangement; max_elem @start so sum always greater than a[i]
            cout << *max_element(arr, arr + n) << " ";
            for (int i = 0; i < n - 1; i++)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
}