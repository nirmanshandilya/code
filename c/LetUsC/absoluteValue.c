#include <stdio.h>

void main()
{
    float num;
    printf("enter num: ");
    scanf("%f", &num);
    if(num>=0)
        printf("absolute value is %0.2f", num);
    else
        printf("absolute value is %0.2f", -num);
    
}