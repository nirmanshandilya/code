#include <stdio.h>
void main()
{
    int temp = 1, base, pow;
    printf("enter base & power: ");
    scanf("%d%d", &base, &pow);
    while (pow)
    {
        temp = temp * base;
        pow--;
    }
    printf("%d", temp);
}