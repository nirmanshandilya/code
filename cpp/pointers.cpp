#include <iostream>
using namespace std;

int add(int a, int b);
int multiply(int a, int b);
void calculate(int a, int b, int (*funcPtr)(int, int));

int main()
{
    // POINTER TO STRING ARRAY
    const char *name[] = {"Nirman", "Saurav", "Som"};
    const char **ptr = name;
    for (int i = 0; i < 3; i++)
        cout << i + 1 << "." << *(ptr + i) << endl;

    // FUNCTION POINTER
    int (*funcPtr)(int a, int b);

    calculate(10, 30, add);

    // funcPtr = add;
    // cout << "Sum: " << funcPtr(10, 30) << endl;

    // funcPtr = multiply;
    // cout << "Product: " << funcPtr(10, 30) << endl;
}

void calculate(int a, int b, int (*funcPtr)(int, int))
{
    cout << funcPtr(a, b) << endl;
}
int add(int a, int b)
{
    return a + b;
}
int multiply(int a, int b)
{
    return a * b;
}