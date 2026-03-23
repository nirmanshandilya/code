// linear search
#include <bits/stdc++.h>
using namespace std;
int linearSearch(vector<int> &arr, int size, int elem) {
  for (int i = 0; i < size; i++) {
    if (arr[i] == elem)
      return i;
  }
  return -1;
}
int main() {
  cout << "##### Linear Search #####" << endl;
  int n;
  cout << "enter array size: ";
  cin >> n;
  vector<int> arr(n);
  cout << "enter array elements: ";
  for (int i = 0; i < n; i++)
    cin >> arr[i];
  int elem;
  cout << "enter elem to search: ";
  cin >> elem;
  cout << linearSearch(arr, n, elem);
  cout << endl;
}
