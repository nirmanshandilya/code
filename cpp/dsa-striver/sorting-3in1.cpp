#include <bits/stdc++.h>
using namespace std;

// ########## SELECTION SORT ##########
void selectionSort(int arr[], int size) {
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
void bubbleSort(int arr[], int size) {
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
void insertionSort(int arr[], int size) {
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

int main() {
  // array input
  int size;
  cout << "enter array size: ";
  cin >> size;
  int arr[size];
  cout << "enter array elements: ";
  for (int i = 0; i < size; i++)
    cin >> arr[i];

  int choice;
  cout << "choose sorting method:\n1. selection sort()\n2. bubble sort()\n3. "
          "insertion sort()\ntype here (integer value): ";
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
  default:
    cout << "invalid choice!" << endl;
    break;
  }
  // insertionSort(arr, size);
  // bubbleSort(arr, size);
  // selectionSort(arr, size);
}