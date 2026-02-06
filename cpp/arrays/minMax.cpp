/*find min and max element in array.*/

#include <iostream>
using namespace std;

int arrMin(int a[], int n)
{
    int i, min = INT_MAX;
    for (i = 0; i < n; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
        }
    }
    return min;
}

int arrMax(int a[], int n)
{
    int i, max = INT_MIN;
    for (i = 0; i < n; i++)
    {
        //maxi = max(maxi, a[i]).  max() min() function pre-defined. 

        if (a[i] > max)
        {
            max = a[i];
        }
    }
    return max;
}

int main()
{
    int i, size;
    cout << "enter array size: ";
    cin >> size;

    int arr[100];
    cout << "enter array elements:\n";
    for (i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "min elem: " << arrMin(arr, size) << endl;
    cout << "max elem: " << arrMax(arr, size) << endl;
}