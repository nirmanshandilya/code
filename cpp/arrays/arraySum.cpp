/*sum of array elements*/

#include <iostream>
using namespace std;

int sum(int arr[], int size){
    int s=0;
    for(int i=0; i<size; i++){
        s+=arr[i];
    }
    return s;

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

    cout << "sum of array elem: " << sum(arr, size) << endl;
}