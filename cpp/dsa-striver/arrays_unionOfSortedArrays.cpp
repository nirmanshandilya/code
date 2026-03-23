// union of two sorted arrays
#include <bits/stdc++.h>
using namespace std;
void unionOfSortedArrays(vector<int> &arr1, int n1, vector<int> &arr2, int n2) {
  int i = 0;
  int j = 0;
  vector<int> unionArray;
  while (i < n1 && j < n2) {
    if (arr1[i] <= arr2[j]) {
      if (unionArray.size() == 0 || unionArray.back() != arr1[i])
        unionArray.push_back(arr1[i]);
      i++;
    } else {
      if (unionArray.size() == 0 || unionArray.back() != arr2[j])
        unionArray.push_back(arr2[j]);
      j++;
    }
  }
  while (i < n1) {
    if (unionArray.size() == 0 || unionArray.back() != arr1[i])
      unionArray.push_back(arr1[i]);
    i++;
  }
  while (j < n2) {
    if (unionArray.size() == 0 || unionArray.back() != arr2[j])
      unionArray.push_back(arr2[j]);
    j++;
  }
  // print unionArray
  for (int i = 0; i < unionArray.size(); i++) {
    cout << unionArray[i] << " ";
  }
}

int main() {
  cout << "\n##### Union of Two Sorted Arrays #####\n" << endl;
  int n1;
  cout << "enter array1 size: ";
  cin >> n1;
  vector<int> arr(n1);
  cout << "enter sorted array1 elements: ";
  for (int i = 0; i < n1; i++)
    cin >> arr[i];
  int n2;
  cout << "enter array2 size: ";
  cin >> n2;
  vector<int> arr2(n2);
  cout << "enter sorted array2 elements: ";
  for (int i = 0; i < n2; i++)
    cin >> arr2[i];

  unionOfSortedArrays(arr, n1, arr2, n2);
  cout << endl;
}
