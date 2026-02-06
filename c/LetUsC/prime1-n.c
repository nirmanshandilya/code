// print all prime nos. betn 1-n

#include <stdio.h>
void main() {
  int i, j, num;
  printf("enter num: ");
  scanf("%d", &num);
  for (i = 2; i <= num; i++) {
    for (j = 2; j <= i / 2; j++) {
      if (i % j == 0)
        break;
    }
    if (i == 2 || i % j != 0)
      printf("%d\n", i);
  }
}
