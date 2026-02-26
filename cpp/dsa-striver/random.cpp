#include <bits/stdc++.h>
using namespace std;

void selectionSort(vector<int> &arr, int size) {
  for (int i = 0; i < size - 1; i++) {
    int minIndex = i;
    for (int j = i; j < size; j++) {
      if (arr[j] < arr[minIndex])
        minIndex = j;
    }
    swap(arr[minIndex], arr[i]);
  }
}
void bubbleSort(vector<int> &arr, int size) {
    
}

int main() {
  int size;
  cin >> size;
  vector<int> arr(size);
  for (int i = 0; i < size; i++)
    cin >> arr[i];
  selectionSort(arr, size);

  // printing the sorted array
  for (int i = 0; i < size; i++)
    cout << arr[i] << " ";
  cout << endl;
}