/*8.4. Write a program to print the multiplication table of 1-5.*/

#include <stdio.h>
void main()
{
	int i,j,prod[6][6];
    printf("\n\tMULTIPLICATION TABLE\n\n");
    printf("  "); //V.V.I STEP!for aligning the 1 of top row with prod[i][j].
	for(j=1; j<=5; j++)
		printf("%4d\t", j);
    printf("\n");
	printf("______________________________________\n");
	for(i=1; i<6; i++)
	{
		printf("%d|", i);
		for(j=1; j<=5; j++)
		{
			prod[i][j] = i * (j+1);
			printf("%4d\t", prod[i][j]);
		}
		printf("\n");
	}

}