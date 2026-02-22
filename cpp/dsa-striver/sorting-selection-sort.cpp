#include <bits/stdc++.h>
using namespace std;
int main() {
  int n;
  cout << "enter array size: ";
  cin >> n;
  int arr[n];
  cout << "enter array elements: ";
  for (int i = 0; i < n; i++)
    cin >> arr[i];
  cout << "\nOriginal array: ";
  for (int i = 0; i < n; i++)
    cout << arr[i] << " ";

  // SELECTION SORT: select min and swap
  for (int i = 0; i < n; i++) {
    int minIndex = i;
    for (int j = i; j < n; j++) {
      if (arr[j] < arr[minIndex])
        minIndex = j;
    }
    swap(arr[i], arr[minIndex]);
  }
  cout << "\nSorted array: ";
  for (int i = 0; i < n; i++)
    cout << arr[i] << " ";
  cout << endl;
}