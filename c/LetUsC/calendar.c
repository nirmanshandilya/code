/*3C(d). According to the Gregorian calendar, it was Monday on the date 
01/01/01. If any year is input through the keyboard write a program 
to find out what is the day on 1st January of this year.*/

#include <stdio.h>
void main()
    {
        int y, days, d;
        printf("enter year: ");
        scanf("%d",&y);

        days= y*365 + (y-1)/4 + (y-1)/400 - (y-1)/100; //formula
        d=days%7; //to find which day of week

        if(d==1)
            printf("mon");
        if(d==2)
            printf("tue");
        if(d==3)
            printf("wed");
        if(d==4)
            printf("thu");
        if(d==5)
            printf("fri");
        if(d==6)
            printf("sat");
        if(d==0)
            printf("sun");
    
    }