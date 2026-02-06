/*insert element at given position in array*/

#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
}

int insertElement(int arr[], int size, int pos, int elem)
{
    for (int i = size; i >= pos; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[pos - 1] = elem;
    return arr[size + 1];
}

int main()
{
    int size, pos, elem, i;
    cout << "array size? ";
    cin >> size;

    int arr[size + 1];

    cout << "enter array elements: ";
    for (i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    
    cout << "new element? ";
    cin >> elem;
    cout << "position of new element? (not index) ";
    cin >> pos;

    insertElement(arr, size, pos, elem);
    printArray(arr, size+1);
}