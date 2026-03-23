#include <bits/stdc++.h>
using namespace std;

void intersectionOfSortedArrays(vector<int> &a, vector<int> &b, int n1,
                                int n2) {
  vector<int> newArr;
  int i = 0, j = 0;
  while (i < n1 && j < n2) {
    if (a[i] < b[j])
      i++;
    else if (b[j] < a[i])
      j++;
    else {
      newArr.push_back(a[i]);
      i++;
      j++;
    }
  }
  // print the intersection array
  for (int i = 0; i < newArr.size(); i++)
    cout << newArr[i] << ' ';
  cout << endl;
}

int main() {
  int n1, n2;
  cin >> n1 >> n2;
  vector<int> a(n1);
  vector<int> b(n2);
  for (int i = 0; i < n1; i++)
    cin >> a[i];
  for (int i = 0; i < n2; i++)
    cin >> b[i];
  intersectionOfSortedArrays(a, b, n1, n2);
}
