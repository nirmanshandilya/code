#include <bits/stdc++.h>
using namespace std;
int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, m;
    cin >> n >> m;
    string x;
    cin >> x;
    string s;
    cin >> s;
    int count = 0;
    bool found = false;
    while (count <= 6) { // after 6 times string length =36(>25)
      if (x.find(s) != -1) {
        found = true;
        break;
      } else
        x += x;
      count++;
    }
    if (found)
      cout << count << endl;
    else
      cout << "-1" << endl;
  }
}