/*5B(h). Write a program to receive an integer and find its octal equivalent.
(Hint: To obtain octal equivalent of an integer, divide it continuously
by 8 till dividend doesn’t become zero, then write the remainders
obtained in reverse direction.)*/

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
