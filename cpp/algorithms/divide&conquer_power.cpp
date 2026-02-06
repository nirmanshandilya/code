#include <iostream>
using namespace std;

int DACpower(long base, long power);

int main() {
  long base, power;
  cout << "enter base: ";
  cin >> base;
  cout << "enter power: ";
  cin >> power;
  cout << DACpower(base, power);
}

int DACpower(long a, long n) {
  long b, mid;
  if (n == 1)
    return a;
  else if (n == 0)
    return 1;
  else {
    mid = n / 2;
    b = DACpower(a, mid);
    if (n % 2 != 0)
      return b * b * a; // for odd powers
    else
      return b * b;
  }
}
