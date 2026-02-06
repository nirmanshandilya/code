/*8.3. Write a program to calculate the following:
        a. sales of one girl for all items.
        b. sales of one item by all girls.
        c. grand total sales of all items by all girls.*/

#include <stdio.h>
void main(){

        int girls, items, i, j;
        int grandtotal;

        printf("how many girls and items?:\n");
        scanf("%d%d", &girls, &items);

        int girlsum[girls], itemsum[items];
        int arr[girls][items];//declare 2D array in separate line
        printf("enter sales row-wise\n(row: girls; column: items):\n");

        for(i=0; i<girls; i++){
                girlsum[i] = 0;
                for(j=0; j<items; j++){
                        scanf("%d", &arr[i][j]); //input array
                        girlsum[i] = girlsum[i] + arr[i][j]; //total sales by girl[i]
                }
        }
        for(j=0; j<items; j++){
                itemsum[j]=0;
                for(i=0; i<girls; i++){
                        itemsum[j] = itemsum[j] + arr[i][j]; //total sales of item[j]
                }
        }
        grandtotal=0;
        for(i=0; i<girls; i++)
                grandtotal = grandtotal + girlsum[i]; //or can be done by using itemsum[j] with j as counter

        //PRINTING
        printf("\nGIRL TOTAL:\n");
        for(i=0; i<girls; i++)
                printf("GIRL%d TOTAL SALES : %d\n", i+1, girlsum[i]);
        
        printf("\n\nITEM TOTAL:\n");
        for(j=0; j<items; j++)
                printf("ITEM%d TOTAL SALES : %d\n", j+1, itemsum[j]);
        
        printf("\n\nGRAND TOTAL :\n%d\n", grandtotal);
        

}
