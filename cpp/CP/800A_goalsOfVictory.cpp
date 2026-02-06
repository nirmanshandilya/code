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
        int n, a, sum = 0; // sum of all teams efficiency = 0
        cin >> n;
        for (int i = 0; i < n - 1; i++) // (n-1) teams
        {
            cin >> a;
            sum += a;
        }
        cout << -sum << endl;
    }
}