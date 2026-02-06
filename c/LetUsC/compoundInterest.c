#include <stdio.h>
#include <math.h>
// to actually include math.h, gcc compoundInterest.c -lm

void main()
{
    float p, q, r, n;

    printf("enter principal: ");
    scanf("%f", &p);
    printf("enter rate: ");
    scanf("%f", &r);
    printf("enter coumponded how many times a year?\n(eg. 1 for annually, 2 for half-yearly, etc.): ");
    scanf("%f", &q);
    printf("enter years: ");
    scanf("%f", &n);

    printf("amount: %7.2f", p * pow((1 + (r / q) / 100), (q * n)));
}
