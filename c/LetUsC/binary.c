/*decimal to binary*/

#include <stdio.h>
#include <math.h>
void main()
{
    int num, rem, dec = 0, count = 0;
    printf("\nenter number: ");
    scanf("%d", &num);
    do
    {
        rem = num % 2;
        dec = dec + rem * pow(10, count);
        num = (num - rem) / 2;
        count++;
    } while (num != 0);

    printf("decimal equivalent: %d", dec);

}