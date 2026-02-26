#include <bits/stdc++.h>
using namespace std;

// ########## partition algorithm for quickSort ##########
int partitionFunction(vector<int> &arr, int low, int high) {
  int pivot = arr[low]; // just needed for concept; else creates confusion
  int i = low;
  int j = high;
  while (i < j) {
    while (arr[i] <= pivot && i <= high - 1)
      i++;
    while (arr[j] >= pivot && j >= low + 1)
      j--;
    if (i < j) {
      int temp = arr[j];
      arr[j] = arr[i];
      arr[i] = temp;
    }
  }
  swap(arr[j], arr[low]);
  return j;
}
// ########## quickSort algorithm ##########
void quickSort(vector<int> &arr, int low, int high) {
  if (low < high) {
    int partitionIndex = partitionFunction(arr, low, high);
    quickSort(arr, low, partitionIndex - 1);
    quickSort(arr, partitionIndex + 1, high);
  }
}

int main() {

  cout << "\n##### Sorting using Quick Sort Algorithm #####\n \n";
  int size;
  cout << "enter array size: ";
  cin >> size;
  cout << "enter array elements: ";
  vector<int> arr(size);
  for (int i = 0; i < size; i++)
    cin >> arr[i];
  quickSort(arr, 0, size - 1);
  cout << "Sorted array (using quickSort): [ ";
  for (int i = 0; i < size; i++)
    cout << arr[i] << " ";
  cout << "]" << endl;
}