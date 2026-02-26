#include <bits/stdc++.h>
using namespace std;

// ########## Merge algorithm for mergeSort ##########
void mergeAlgorithm(vector<int> &arr, int low, int mid, int high) {
  vector<int> temp;
  int left = low;
  int right = mid + 1;
  while (left <= mid && right <= high) {
    if (arr[left] <= arr[right]) {
      temp.push_back(arr[left]);
      left++;
    } else {
      temp.push_back(arr[right]);
      right++;
    }
  }
  while (left <= mid) {
    temp.push_back(arr[left]);
    left++;
  }
  while (right <= high) {
    temp.push_back(arr[right]);
    right++;
  }
  for (int i = low; i <= high; i++) {
    arr[i] = temp[i - low];
  }
}
// ########## Divide algorithm for mergeSort ##########
void mergeSort(vector<int> &arr, int low, int high) {
  if (low == high)
    return;
  int mid = (low + high) / 2;
  mergeSort(arr, low, mid);
  mergeSort(arr, mid + 1, high);
  mergeAlgorithm(arr, low, mid, high);
}

int main() {

  cout << "\n##### Sorting using Merge Sort Algorithm #####\n \n";
  int size;
  cout << "enter array size: ";
  cin >> size;
  cout << "enter array elements: ";
  vector<int> arr(size);
  for (int i = 0; i < size; i++)
    cin >> arr[i];
  mergeSort(arr, 0, size - 1);
  cout << "Sorted array (using mergeSort): [ ";
  for (int i = 0; i < size; i++)
    cout << arr[i] << " ";
  cout << "]" << endl;
}