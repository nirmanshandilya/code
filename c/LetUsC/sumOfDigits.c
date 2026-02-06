#include <stdio.h>
void main(){
    int num, sum=0;
    printf("enter num: ");
    scanf("%d", &num);
    while(num){
        sum = sum + num%10;
        num /= 10;
    }
    printf("%d", sum);
}