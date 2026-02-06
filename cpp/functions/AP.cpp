/*find nth term of AP if t = 3*n + 7.*/

#include <iostream>
using namespace std;

int ap(int n)
{
    int t;
    t =  (3*n)+7;

    return t;   

}

int main()
{
    int n, ans;
    cout << "n = ";
    cin >> n;
    ans = ap(n);

    cout << ans;
    return 0;

}