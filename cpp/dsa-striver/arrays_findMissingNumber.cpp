#include <bits/stdc++.h>
using namespace std;

int missingNumber(vector<int> &a, int n) {
  int xor1 = 0, xor2 = 0;
  for (int i = 0; i < n - 1; i++) {
    xor1 ^= (i + 1);
    xor2 ^= a[i];
  }
  xor1 ^= n;
  return xor1 ^ xor2;
}

int main() {
  int n;
  cin >> n;
  vector<int> a(n - 1);
  for (int i = 0; i < n - 1; i++)
    cin >> a[i];
  cout << missingNumber(a, n) << endl;
}
