#include <iostream>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int a, b, c, d, count = 0;
        cin >> a >> b >> c >> d;
        if (a < b)
            count++;
        if (a < c)
            count++;
        if (a < d)
            count++;
        cout << count << endl;
    }
}