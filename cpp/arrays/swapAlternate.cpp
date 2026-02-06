/*swap alternate values of array.
  eg: [1, 2, 3, 4, 5, 6] ---> [2, 1, 4, 3, 6, 5]*/

#include <iostream>
using namespace std;

int i; // global declaration

// printing array elements
int printArray(int arr[], int size)
{
    for (i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return arr[i];
}

// swapping alternate elements
int swap(int xyz[], int size)
{
    int newArr[size];
    for (i = 0; i < size; i++)
    {
        if (i == size - 1 && i % 2 == 1) // last index odd
            newArr[i] = xyz[i - 1];

        else if (i == size - 1 && i % 2 == 0) // last index even
            newArr[i] = xyz[i];

        else if (i % 2 != 0) // odd index
            newArr[i] = xyz[i - 1];
        else
            newArr[i] = xyz[i + 1]; // even index
    }
    return printArray(newArr, size);
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

    cout << "\nnew array: ";
    swap(arr, size);
}