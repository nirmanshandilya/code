#include <iostream>
using namespace std;

int main()
{
    string name = "\"Nirman Shandilya\"";
    string *ptr = &name;
    cout << "address is: " << ptr << endl;
    cout << "value is: " << *ptr << endl;
    cout << "size of pointer: " << sizeof(ptr) << endl;
    cout << "size of variable(string): " << sizeof(*ptr) << endl;

    //pointer to garbage address aka WILD POINTER
    int *p;
    cout << p << " " << *p << endl;

    int n = 20;
    int *a = &n;
    (*a)++;
    cout << n << endl;
    cout << *a << endl;

    // copying a pointer
    int **ptr2 = &a;
    cout << "address at a: " << a << endl
         << "address at ptr2: " << ptr2 << endl;
    cout << "value at a: " << *a << endl
         << "value at ptr2: " << *ptr2 << endl;

    // incrementing a pointer
    int i = 3;
    int *ptr3 = &i;
    cout << "before " << ptr3 << endl;
    ptr3++;
    cout << "after " << ptr3 << endl;
}