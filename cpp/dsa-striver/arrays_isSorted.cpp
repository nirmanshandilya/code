// check if array is sorted

#include <bits/stdc++.h>
using namespace std;

int isSorted(vector<int> &arr, int size) {
  bool sorted = true;
  for (int i = 0; i < size - 1; i++) {
    if (arr[i] > arr[i + 1]) {
      sorted = false;
      break;
    }
  }
  return sorted;
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
    int ans = isSorted(arr, size);
    if (ans == 1)
      cout << "sorted" << endl;
    else
      cout << "not sorted in non-decreasing order" << endl;
  }
}