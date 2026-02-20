#include <bits/stdc++.h>
using namespace std;
int main() {
  int n;
  cin >> n;
  vector<int> nums(n);
  unordered_map<int, int> umap;
  for (int i = 0; i < n; i++) {
    cin >> nums[i];
    umap[nums[i]]++;
  }
  vector<vector<int>> res;
  for (const auto &it : umap) {
    res.push_back({it.first, it.second});
  }
  for (int i = 0; i < res.size(); i++)
    cout << "[" << res[i][0] << "," << res[i][1] << "]" << endl;
}