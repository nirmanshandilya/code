/*for 2 given nos. a & b, count the no. of set bits.
    eg: if a=2 b=3, then binary(a)=10 binary(b)=11.
        so, total no. of set bits = total no. of 1's in binary. (here, 1+2=3)*/

#include <iostream>
#include <math.h>
using namespace std;

int countSetBits(int x)
{
    int rem, count = 0;
    while (x != 0)
    {

        rem = x % 2;
        if (rem == 1)
            count++;
        x = x / 10;
    }
    return count;
}

int decimalToBinary(int num)
{
    int i, rem, bin = 0;
    while (num != 0)
    {
        rem = num % 2;
        bin = bin + rem * pow(10, i);
        num = num / 2;
        i++;
    }
    return countSetBits(bin);
}

int main()
{
    int a, b;
    cout << "enter a & b:" << endl;
    cin >> a >> b;
    cout << "total set bits: " << decimalToBinary(a) + decimalToBinary(b);
}