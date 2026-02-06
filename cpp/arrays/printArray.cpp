/*input array from user & print array using function.*/

#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
}

int main()
{
    int i, size, num;
    cout << "enter array size: ";
    cin >> size;

    int arr[100];
    cout << "enter array elements: ";
    for (i = 0; i < size; i++)
        cin >> arr[i];
    
    printArray(arr, size);
}