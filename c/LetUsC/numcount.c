/*5B(g). Write a program to enter numbers till the user wants. At the end it 
should display the count of positive, negative and zeros entered.*/

#include <stdio.h>
void main()
{
    float num;
    int cp=0, cn=0, cz=0;
    char user='y';
    //use do-while loop.
    do{
    printf("enter number: \n");
    scanf("%f", &num);
    if(num>0)
        cp++;
    else if(num<0)
        cn++;
    else
        cz++;
    printf("enter another? (y/n): \n");
    scanf(" %c", &user); //without the space in " %c", loop wont work.
    
    } while(user=='y');
    
    printf("total +ve nos.: %d\ntotal -ve nos.: %d\ntotal zeros: %d\n", cp, cn, cz);
}
