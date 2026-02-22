#include <bits/stdc++.h>
using namespace std;
int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++)
      cin >> a[i];
    sort(a.begin(), a.end());
    if (a[0] == a[n - 1])
      cout << "-1" << endl;
    else {
      for (int i = 1; i < n; i++) {
        if (a[0] != a[i]) {
          cout << i << " " << n - i << endl;
          for (int j = 0; j < i; j++)
            cout << a[j] << " ";
          cout << endl;
          for (int j = i; j < n; j++)
            cout << a[j] << " ";
          cout << endl;
          break;
        }
      }
    }
  }
}