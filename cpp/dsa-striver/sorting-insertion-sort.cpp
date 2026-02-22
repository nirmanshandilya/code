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

  // INSERTION SORT: select an elem and place it in its correct position
  for (int i = 0; i < n; i++) {
    int j = i;
    while (arr[j] < arr[j - 1] && j > 0) {
      // swap()
      int temp = arr[j];
      arr[j] = arr[j - 1];
      arr[j - 1] = temp;
      cout << "swapped ";
      j--;
    }
  }
  cout << "\nSorted array: ";
  for (int i = 0; i < n; i++)
    cout << arr[i] << " ";
  cout << endl;
}