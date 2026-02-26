#include <bits/stdc++.h>
using namespace std;

// ########## SELECTION SORT ##########
void selectionSort(vector<int> &arr, int size) {
  for (int i = 0; i < size - 1; i++) {
    int minIndex = i;
    for (int j = i; j < size; j++) {
      if (arr[j] < arr[minIndex]) {
        int temp = arr[j];
        arr[j] = arr[minIndex];
        arr[minIndex] = temp;
      }
    }
  }
  // printing the sorted array
  cout << "Sorted array: [ ";
  for (int i = 0; i < size; i++)
    cout << arr[i] << " ";
  cout << "]" << endl;
}

// ########## BUBBLE SORT ##########
void bubbleSort(vector<int> &arr, int size) {
  for (int i = size - 1; i > 0; i--) {
    bool didSwap = false; // optimization if already sorted
    for (int j = 0; j < size - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
        didSwap = true;
      }
    }
    if (!didSwap)
      break;
  }
  // printing the sorted array
  cout << "Sorted array: [ ";
  for (int i = 0; i < size; i++)
    cout << arr[i] << " ";
  cout << "]" << endl;
}

// ########## INSERTION SORT ##########
void insertionSort(vector<int> &arr, int size) {
  for (int i = 0; i < size; i++) {
    int j = i;
    while (arr[j] < arr[j - 1] && j > 0) {
      int temp = arr[j];
      arr[j] = arr[j - 1];
      arr[j - 1] = temp;
      j--;
    }
  }
  // printing the sorted array
  cout << "Sorted array: [ ";
  for (int i = 0; i < size; i++)
    cout << arr[i] << " ";
  cout << "]" << endl;
}

// ########## MERGE SORT ##########
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
  for (int i = low; i <= high; i++)
    arr[i] = temp[i - low];
}
void mergeSort(vector<int> &arr, int low, int high) {
  if (low == high)
    return;
  int mid = (low + high) / 2;
  mergeSort(arr, low, mid);
  mergeSort(arr, mid + 1, high);
  mergeAlgorithm(arr, low, mid, high);
}

int main() {
  // array input
  int size;
  cout << "\nenter array size: ";
  cin >> size;
  vector<int> arr(size);
  cout << "enter array elements: ";
  for (int i = 0; i < size; i++)
    cin >> arr[i];

  int choice;
  cout << "choose sorting method:\n1. selection sort()\n2. bubble sort()\n3. "
          "insertion sort()\n4. merge sort()\ntype here (integer value): ";
  cin >> choice;
  switch (choice) {
  case 1:
    selectionSort(arr, size);
    break;
  case 2:
    bubbleSort(arr, size);
    break;
  case 3:
    insertionSort(arr, size);
    break;
  case 4:
    mergeSort(arr, 0, size - 1);
    // printing the sorted array
    cout << "Sorted array (using mergeSort() ): [ ";
    for (int i = 0; i < arr.size(); i++)
      cout << arr[i] << " ";
    cout << "]" << endl;
    break;
  default:
    cout << "invalid choice!" << endl;
    break;
  }
  // insertionSort(arr, size);
  // bubbleSort(arr, size);
  // selectionSort(arr, size);
}