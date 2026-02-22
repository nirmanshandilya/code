#include <iostream>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        string tkt;
        cin >> tkt;
        if (tkt[0] + tkt[1] + tkt[2] == tkt[3] + tkt[4] + tkt[5])
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}