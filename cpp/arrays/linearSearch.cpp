/*Linear Search*/

#include <iostream>
using namespace std;

bool linearSearch(int k, int arr[], int size) {
  for (int i = 0; i < size; i++) {
    if (k == arr[i])
      return 1; // 1 == true
  }
  return 0;
}

int main() {
  int i, size, num;
  cout << "enter array size: ";
  cin >> size;

  int arr[100];
  cout << "enter array elements:\n";
  for (i = 0; i < size; i++) {
    cin >> arr[i];
  }

  cout << "enter elem to search: ";
  cin >> num;

  linearSearch(num, arr, size);

  if (linearSearch(num, arr, size)) {
    cout << "present";
  } else
    cout << "absent";
}