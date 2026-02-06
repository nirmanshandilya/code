/*8.5. Write a program to find the popularity of 4 diff cars in 4 diff cities.
        CITY        CODE              CAR       CODE
        BOMBAY      B                 TATA      1
        CHENNAI     C                 MAHINDRA  2
        DELHI       D                 TOYOTA    3
        RANCHI      R                 MARUTI    4*/
        
#include <stdio.h>
void main()
{
    int i, j, car;
    int freq[5][5];
    char city;
    printf("enter city code\nfollowed by car code.\nenter X to end input.\n");
    
    for(i=0; i<=50; i++){
        scanf("%c", &city);
        if(city=='X')
            break;
        scanf("%d", &car);

        switch(city){

            case 'B': freq[1][car]++;
                break;
            case 'C': freq[2][car]++;
                break;
            case 'D': freq[3][car]++;
                break;
            case 'R': freq[4][car]++;
                break;
            }
    }
            //tabulation over.
    //printing

    printf("CITY\tTATA\tMAHINDRA\tTOYOTA\tMARUTI\n\n");
    printf("_________________________________________________________________________________\n");

    for(i=1; i<5; i++){

        switch(i){
            case 1: printf("BOMBAY");
                break;
            case 2: printf("CHENNAI");
                break;
            case 3: printf("DELHI");
                break;
            case 4: printf("RANCHI");
                break;
                    
        }
        
        for(j=1; j<5; j++){
            printf("%7d\t", freq[i][j]);
        }
        printf("\n");
    }




}
