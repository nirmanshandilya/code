#include <iostream>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N, sum = 0;
        cin >> N;
        int A[N];
        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
            sum += A[i];
        }
        if (sum >= 0)
            cout << 0 << endl;
        else
        {
            sum = -sum;
            if (sum % N != 0) //main catch!
                cout << (sum / N) + 1 << endl;
            else
                cout << sum / N << endl;
        }
    }
}