/*find nth fibonacci number: 0 1 1 2 3 5 8 13 21...
  n starts from 0. */

#include <iostream>
using namespace std;
int fib(int n);

int main() {
  int n;
  cout << "n: ";
  cin >> n;
  cout << fib(n) << endl;
}

int fib(int n) {
  if (n == 0)
    return 0;
  if (n == 1)
    return 1;
  return fib(n - 1) + fib(n - 2);
}