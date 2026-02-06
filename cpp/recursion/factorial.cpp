/*find factorial(n) using recursion*/

#include <iostream>
using namespace std;
int fact(int n);

int main() {
  int num;
  cout << "n: ";
  cin >> num;
  cout << num << "! = " << fact(num);
  return 0;
}

int fact(int n) {
  if (n == 1)
    return 1;
  int r = fact(n - 1) * n;
  return r;
}