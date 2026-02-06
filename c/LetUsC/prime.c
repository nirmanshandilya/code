// check if no. is prime or not

#include <stdio.h>
void main() {
  int num, n;
  printf("enter num: ");
  scanf("%d", &num);
  for (int i = 2; i <= num / 2; i++) {
    n = num % i;
    if (n == 0)
      break;
  }
  if (n != 0 || num == 2)
    printf("prime");
  else
    printf("not prime");
}