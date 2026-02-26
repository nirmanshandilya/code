// return the second largest element in the array

#include <bits/stdc++.h>
using namespace std;

int secondLargestElement(vector<int> &arr, int size) {
  int largest = arr[0];
  int secondLargest = -1;
  for (int i = 0; i < size; i++) {
    if (arr[i] > largest) {
      secondLargest = largest; // critical step
      largest = arr[i];
    } else if (arr[i] < largest && arr[i] > secondLargest)
      secondLargest = arr[i];
  }
  return secondLargest;
}

int main() {
  int tc;
  cout << "enter no. of test cases: ";
  cin >> tc;
  while (tc--) {
    int size;
    cout << "enter array size: ";
    cin >> size;
    cout << "enter array elements: ";
    vector<int> arr(size);
    for (int i = 0; i < size; i++)
      cin >> arr[i];
    cout << "second largest element of array is "
         << secondLargestElement(arr, size) << endl;
  }
}