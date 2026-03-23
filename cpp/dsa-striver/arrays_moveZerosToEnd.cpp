// move all zeros to right
#include <bits/stdc++.h>
using namespace std;
void moveZerosToEnd(vector<int> &arr, int size) {
  // first index with elem 0
  int j = -1;
  for (int i = 0; i < size; i++) {
    if (arr[i] == 0) {
      j = i;
      break;
    }
  }
  // if no elem 0
  if (j == -1)
    return;

  for (int i = j + 1; i < size; i++) {
    if (arr[i] != 0) {
      swap(arr[i], arr[j]);
      j++;
    }
  }
}
int main() {
  cout << "##### Moving all zeros to the end #####" << endl;
  int n;
  cout << "enter array size: ";
  cin >> n;
  vector<int> arr(n);
  cout << "enter array elements: ";
  for (int i = 0; i < n; i++)
    cin >> arr[i];
  moveZerosToEnd(arr, n);
  // printing updated array
  for (int i = 0; i < n; i++)
    cout << arr[i] << " ";
  cout << endl;
}
