/*reverse an array.*/

#include <iostream>
using namespace std;

int i;

// from printArray.cpp
int printArray(int arr[], int size)
{
    for (i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return arr[i];
}

// create new array revArray[] for storing reversed elements.
int revArr(int xyz[], int size)
{
    int rev[size];
    // rev[] to store reversed values. else array starts repeating same elements after (size/2).

    for (i = 0; i < size; i++)
    {
        rev[i] = xyz[size - i - 1];
    }
    return printArray(rev, size);
}

int main()
{
    int size;
    cout << "enter array size: ";
    cin >> size;

    int arr[100];
    cout << "enter array elements:\n";
    for (i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "original array: ";
    printArray(arr, size);

    cout << "\nreversed array: ";
    revArr(arr, size);
}