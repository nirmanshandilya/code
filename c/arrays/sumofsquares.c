/*8.1. Write a program to take 10 real no. inputa and print the sum of their squares.*/

#include <stdio.h>
void main(){
    float arr[10], sum=0;
    int i;
    for(i=0; i<10; i++){
        scanf("%f", &arr[(int) i]);
    }
    for(i=0; i<10; i++){
        sum = sum + arr[i]*arr[i];
    }
    printf("sum of squares = %4.2f", sum);

}