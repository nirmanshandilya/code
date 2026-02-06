#include <stdio.h>
void main(){
    int c,d;
    printf("enter c & d: ");
    scanf("%d %d", &c, &d);
    c=c+d;
    d=c-d;
    c=c-d;
    printf("c = %d, d = %d",c,d);
}