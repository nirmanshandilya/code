#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<long> n(4);
    for (int i = 0; i < 4; i++)
        cin >> n[i];
    unordered_set<long> m; // stores unique values only
    for (int i : n)
        m.insert(i);
    cout << 4 - m.size() << endl;
}