#include <stdio.h>
void main(){
    int fact=1, num;
    printf("enter num (<17): ");
    scanf("%d", &num);
    int temp = num;
    while(num>0){
        fact=fact*num;
        num--;
    }
    printf("%d! = %d", temp, fact);
}