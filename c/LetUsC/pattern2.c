/*  ABCDEFGFEDCBA
    ABCDEF FEDCBA
    ABCDE   EDCBA
    ABCD     DCBA
    ABC       CBA
    AB         BA
    A           A*/

#include <stdio.h>
void main() {
  int i, j, row;
  printf("enter row: ");
  scanf("%d", &row);

  for (i = 0; i < row; i++) {
    int ch = 65;

    // left character triangle
    for (j = 0; j < row - i; j++) {
      printf("%c ", ch + j);
    }

    // space triangle
    if (i == 0) {
      printf("\0"); // condition for 1st row
    }
    for (j = 1; j <= i * 2 - 1; j++) {
      printf("  ");
    }

    // right character triangle
    if (i == 0) { // condition for 1st row
      for (j = row - i - 1; j > 0; j--) {
        printf("%c ", ch + j - 1);
      }
    } else {
      for (j = row - i; j > 0; j--) {
        printf("%c ", ch + j - 1);
      }
    }

    printf("\n");
  }
}
