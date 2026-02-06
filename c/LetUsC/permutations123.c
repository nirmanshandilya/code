#include <stdio.h>
void main(){
  int i, j, k;
  for (i=1;i<4;i++) {
    for (j=1;j<4;j++) {
      for (k=1;k<4;k++) {
        printf("%d\n", i*100+j*10+k);
      }
    }
  }

}
