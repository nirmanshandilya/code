#include <bits/stdc++.h>
using namespace std;

int main() {
  int tc;
  cin >> tc;
  while (tc--) {
    long long n, k, x;
    cin >> n >> k >> x;
    long long smallestSum = k * (k + 1) / 2;
    long long largestSum = n * (n + 1) / 2 - (n - k) * (n - k + 1) / 2;
    if (x <= largestSum && x >= smallestSum)
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }
}
