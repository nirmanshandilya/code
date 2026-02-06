#include <stdio.h>
int gcd(int a, int b);

void main()
{
  int m, n;
  printf("enter m,n: ");
  scanf("%d%d", &m, &n);
  int hcf = gcd(m, n);
  printf("GCD(%d, %d): %d", m, n, hcf);
}

int gcd(int m, int n)
{
  if (m == 0 && n == 0)
  {
    return -1;
  }
  else if (m == 0)
    return n;
  else if (n == 0)
    return m;
  else
    return gcd(n, m % n);
}