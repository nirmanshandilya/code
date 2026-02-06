/*5B(f). Write a program for a matchstick game being played between the 
computer and a user. Your program should ensure that the 
computer always wins. Rules for the game are as follows:
 There are 21 matchsticks.
 The computer asks the player to pick 1, 2, 3, or 4 matchsticks.
 After the person picks, the computer does its picking.
 Whoever is forced to pick up the last matchstick loses the game.*/

#include <stdio.h>
void main()
{
   int user, comp, n,m=21;
   for(n=0; n<22; n++){
    printf("enter user choice: ");
    scanf("%d", &user);
    if(user>4){
        printf("invalid user choice! pick bet 1-4\n");
        continue;
    }
    comp=5-user;
    m=m-(user+comp);
    printf("computer's choice: %d\n", comp);
    printf("matches left: %d\n",m);
    n+=5;
   }
   printf("haha! you picked the last match. you LOSE!\n");

}
