#include <bits/stdc++.h>
using namespace std;
int main() {
  int tc; // test cases
  cin >> tc;
  while (tc--) {
    int n;
    cin >> n; // array size
    int a[n];
    for (int i = 0; i < n; i++) // array input
      cin >> a[i];

    // hcf of all elements
    bool beautiful = false;
    int hcf = INT_MAX;
    for (int i = 0; i < n - 1; i++) {
      for (int j = i + 1; j < n; j++) {
        hcf = min(hcf, gcd(a[i], a[j]));
        if (hcf == 1)
          break;
      }
      if (hcf == 1)
        break;
    }

    if (hcf <= 2)
      cout << "Yes" << endl;
    else
      cout << "No" << endl;
  }
}