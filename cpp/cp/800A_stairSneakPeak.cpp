#include <iostream>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        (a < b) && (b < c) ? cout << "STAIR" << endl : (a < b) && (b > c) ? cout << "PEAK" << endl
                                                                          : cout << "NONE" << endl;
    }
}