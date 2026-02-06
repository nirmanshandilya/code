#include <stdio.h>
void main(){
    int year;
    printf("enter year: ");

    //USING CONDITIONAL OPERATORS
    // year%400==0? printf("leap")
    //     : year%4==0 && year%100!=0? printf("leap")
    //         : printf("not leap");

    //USING IF-ELSE BLOCK
    scanf("%d", &year);
     if(year%400==0)
         printf("leap year");
     else if(year%4==0 && year%100!=0)
         printf("leap year");
     else    printf("not leap year");
}
