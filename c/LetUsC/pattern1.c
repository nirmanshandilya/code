#include <stdio.h>
void main(){
  int i, j, k, n=1, rows;
  printf("how many rows? ");
  scanf("%d", &rows);
  for (i=1;i<=rows;i++) {

    for (k=rows-i;k>=0;k--) {
      printf(" ");
    }
    for (j=1;j<=i;j++) {
      printf("%d ", n);
      n++;
    }
    printf("\n");
  }
}
