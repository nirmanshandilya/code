#include <bits/stdc++.h>
using namespace std;
int main() {
  string name;
  cin >> name;
  unordered_set<char> distinctchar;  // set will only allow unique char
  for (auto i : name) distinctchar.insert(i);
  if (distinctchar.size() % 2 != 0)
    cout << "IGNORE HIM!" << endl;
  else
    cout << "CHAT WITH HER!" << endl;
}