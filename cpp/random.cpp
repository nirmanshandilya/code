#include <bits/stdc++.h>
using namespace std;
int main()
{
    long k, n, w, sum = 0;
    cin >> k >> n >> w;
    for (int i = 1; i <= w; i++)
        sum += k * i;

    if (sum <= n)
        cout << "0" << endl;
    else
        cout << abs(n - sum) << endl;
}