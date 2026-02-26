// return the second smallest element in the array

#include <bits/stdc++.h>
using namespace std;

int secondSmallestElement(vector<int> &arr, int size) {
  int smallest = arr[0];
  int secondSmallest = INT_MAX;
  for (int i = 1; i < size; i++) {
    if (arr[i] < smallest) {
      secondSmallest = smallest;
      smallest = arr[i];
    } else if (arr[i] != smallest && arr[i] < secondSmallest)
      secondSmallest = arr[i];
  }
  return (secondSmallest == INT_MAX) ? -1 : secondSmallest;
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
    cout << "second smallest element of array is "
         << secondSmallestElement(arr, size) << endl;
  }
}