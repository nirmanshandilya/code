// for testing random code.

#include <stdio.h>

void main()
{
  // find min of 4 nos. using ternary operator
  int a, b, c, d, min;
  printf("enter 4 nos: ");
  scanf("%d%d%d%d", &a, &b, &c, &d);
  printf("min = %d", a < b && a < c && a < d ? a : b < c && b < d ? b
                                               : c < d            ? c
                                                                  : d);
}
