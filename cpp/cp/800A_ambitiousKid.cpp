#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
#include <vector>
#include <math.h>
using namespace std;
int main()
{
    // int tc;
    // cin >> tc;
    // while (tc--)
    // {

    // }
    int n, a, min = __INT_MAX__;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if (a == 0)
            min = 0;
        else
        {
            if (abs(a) < min)
                min = abs(a);
        }
    }
    cout << min << endl;
}