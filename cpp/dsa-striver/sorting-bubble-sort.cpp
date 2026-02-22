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

  // BUBBLE SORT: push max-elem at end in each pass
  for (int i = 0; i < n; i++) {
    bool didSwap = false; // optimisation for best case
    for (int j = 0; j < n - i; j++) {
      if (arr[j + 1] < arr[j]) {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
        didSwap = true;
      }
      if (!didSwap) // if no swaps done, array already sorted
        break;
      cout << "runs "; // this line wont run for best case
    }
  }
  cout << "\nSorted array: ";
  for (int i = 0; i < n; i++)
    cout << arr[i] << " ";
  cout << endl;
}