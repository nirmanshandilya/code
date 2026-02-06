/*5B(a). Write a program to calculate overtime pay of 10 employees. 
Overtime is paid at the rate of Rs. 12.00 per hour for every hour 
worked above 40 hours. Assume that employees do not work for 
fractional part of an hour.*/
#include <stdio.h>
void main()
{
    int time, i=1,otpay;
    while(i<=10)
    {
        printf("\nenter no. of hours for employee %d:\n", i);
        scanf("%d", &time);
        if(time>40)
        {
            printf("overtime pay= Rs.%d\n", 12*(time-40));
        }
        else
            printf("no overtime\n");
        i++;
    }
}