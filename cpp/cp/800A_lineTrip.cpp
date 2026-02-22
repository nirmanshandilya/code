#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, x;
        cin >> n >> x;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int gasdist = 0;

        // dist from 0 to 1st gas station
        gasdist = max(gasdist, a[0] - 0);

        // dist betn consecutive gas stations; starts from 2nd gasStation
        for (int i = 1; i < n; i++)
        {
            gasdist = max(gasdist, a[i] - a[i - 1]);
        }

        // dist for last gas; 2*gasdist
        gasdist = max(gasdist, 2 * (x - a[n - 1]));

        cout << gasdist << endl;
    }
}