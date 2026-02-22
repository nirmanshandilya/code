#include <bits/stdc++.h>
using namespace std;
int main() {
  int n;
  cout << "enter array size: ";
  cin >> n;
  vector<int> nums(n);
  unordered_map<int, int> umap;
  cout << "enter array elements: ";
  for (int i = 0; i < n; i++) {
    cin >> nums[i];
    umap[nums[i]]++; // umap input
  }
  int maxfreq = 0, elem;
  for (const auto &it : umap) {
    if (it.second > maxfreq) {
      maxfreq = it.second;
      elem = it.first;
    }
  }
  for (const auto &it : umap) {
    if (it.second == maxfreq && it.first < elem)
      elem = it.first;
  }
  cout << "the minimum among the highest occuring elements in array is " << elem
       << "." << endl;
}