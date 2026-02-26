//return the largest element in the array

#include <bits/stdc++.h>
using namespace std;

int largestElement(vector<int> &arr, int size) {
  int largest = arr[0];
  for (int i = 1; i < size; i++) {
    if (arr[i] > largest)
      largest = arr[i];
  }
  return largest;
}

int main() {
  int size;
  cin >> size;
  vector<int> arr(size);
  for (int i = 0; i < size; i++)
    cin >> arr[i];
  cout << largestElement(arr, size) << endl;
}