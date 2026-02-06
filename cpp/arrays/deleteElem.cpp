/*delete element from given position in array*/

#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
    for (int i = 0; i < size-2; i++)
        cout << arr[i] << " ";
}

int deleteElem(int arr[], int size, int pos, int elem)
{
    for (int i = pos - 1; i <= size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    return arr[size - 1];
}

int main()
{
    int size, pos, elem, i;
    cout << "array size? ";
    cin >> size;

    int arr[size];

    cout << "enter array elements: ";
    for (i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "position of element to delete? (not index) ";
    cin >> pos;

    deleteElem(arr, size, pos, elem);
    printArray(arr, size + 1);
}