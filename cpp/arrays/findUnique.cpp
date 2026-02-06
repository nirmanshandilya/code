/*size of array n = 2m + 1.
  'm' elems. are present 2 times each in the array while 1 elem.
  present only once and is unique. find this element as output.

  eg: [-12, 21, 4, -12, -5, 21, 4]
      --> here unique elem = -5
*/

#include <iostream>
using namespace std;

int findUnique(int arr[], int size) {
  int ans = 0;

  for (int i = 0; i < size; i++)
    ans = ans ^ arr[i]; // XOR each element. a^a=0. so repeated elem removed.

  return ans;
}

int main() {

  int i, size, num;
  cout << "enter array size: ";
  cin >> size;

  int arr[100];
  cout << "enter array elements:\n";
  for (i = 0; i < size; i++)
    cin >> arr[i];

  cout << "unique element: " << findUnique(arr, size);
}