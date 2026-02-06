#include <stdio.h>
void main(){
    float i, j, n, temp, sum=0;
    printf("how many terms?\n");
    scanf("%f", &n);
    for (i=1;i<=n;i++) {
      temp=1;
      for (j=1;j<=i;j++) {
        temp*=j;
        }
        sum += (i/temp);
    }
    printf("sum: %0.4f", sum);
  }
