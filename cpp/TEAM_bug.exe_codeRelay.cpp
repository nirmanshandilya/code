#include <bits/stdc++.h>
using namespace std;

// ALL FUNCTIONS
void add()
{
    cout << "enter a & b:\n";
    double a, b;
    cin >> a;
    cin >> b;
    cout << a + b << endl;
}
void subs()
{
    cout << "enter a & b:\n";
    double a, b;
    cin >> a;
    cin >> b;
    cout << a - b << endl;
}
void mul()
{
    cout << "enter a & b:\n";
    double a, b;
    cin >> a >> b;
    cout << a * b << endl;
}
void divi()
{
    cout << "enter a & b:\n";
    double a, b;
    cin >> a >> b;
    if (b == 0)
    {
        cout << "Division by 0 invalid!" << endl;
        return;
    }
    else
        cout << a / b << endl;
}
void modu()
{
    cout << "enter a & b:\n";
    int a, b;
    cin >> a >> b;
    if (b == 0)
    {
        cout << "Division by 0 invalid!" << endl;
        return;
    }
    else
        cout << a % b << endl;
}
void power()
{
    cout << "enter a & b:\n";
    int a, b;
    cin >> a >> b;
    long long ans = 1;
    for (int i = 1; i <= b; i++)
    {
        ans *= a;
    }
    cout << ans << endl;
}
void sqrroot()
{
    cout << "enter number:\n";
    int n;
    cin >> n;
    for (int i = 1; i <= n / 2; i++)
    {
        if (i * i > n)
        {
            cout << i - 1 << endl;
            break;
        }
    }
}

int main()
{
    int ch;
    cout << " %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n";
    cout << "          CALCULATOR\n ";
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n";
    cout << " 1. add\n ";
    cout << "2. subtract\n ";
    cout << "3. multiply\n ";
    cout << "4. division\n ";
    cout << "5. modulo\n ";
    cout << "6. power\n ";
    cout << "7. sqrroot\n ";
    cout << "enter the operation you want to perform (1-7):\n ";
    cin >> ch;
    switch (ch)
    {
    case 1:
        add();
        break;
    case 2:
        subs();
        break;
    case 3:
        mul();
        break;
    case 4:
        divi();
        break;
    case 5:
        modu();
        break;
    case 6:
        power();
        break;
    case 7:
        sqrroot();
        break;
    }
    return 0;
}