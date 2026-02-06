// to check if given no. prime or not

#include <iostream>
using namespace std;
int main()
{
    int i = 2, num, n;
    cout << "\nenter num: ";
    cin >> num;
    for (i = 2; i <= num / 2; i++)
    {
        n = num % i;
        if (n == 0)
        {
            cout << "not prime";
            break;
        }
    }
    if (n != 0 || num == 2)
        cout << "prime";
}