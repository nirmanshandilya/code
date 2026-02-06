#include <iostream>
#include <array>
using namespace std;

int main()
{
    int basic[5] = {1, 2, 3, 4, 5};

    array<int, 5> arr = {1, 2, 3, 4, 5};
    int size = arr.size();

    for (int i = 0; i < size; i++)
        cout << arr[i] << endl;
    

    cout << "is array empty? " << arr.empty() << endl;
    cout << "element at index[2] -> " << arr.at(2) << endl;
    cout << "first element -> " << arr.front() << endl;
    cout << "last element -> " << arr.back() << endl;

    return 0;
}