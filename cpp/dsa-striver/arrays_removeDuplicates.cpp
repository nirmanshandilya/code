// remove duplicates from sorted array
#include <bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int> &nums) {
  int i = 0;
  for (int j = 1; j < nums.size(); j++) {
    if (nums[j] != nums[i]) {
      nums[i + 1] = nums[j];
      i++;
    }
  }
  return i + 1;
}
int main() {
  int tc;
  cout << "enter no. of test cases: ";
  cin >> tc;
  while (tc--) {
    int size;
    cout << "enter array size: ";
    cin >> size;
    cout << "enter array elements in non-decreasing order: ";
    vector<int> arr(size);
    for (int i = 0; i < size; i++)
      cin >> arr[i];
    cout << "number of unique elements is " << removeDuplicates(arr) << endl;
  }
}
