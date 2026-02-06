/*5B(j). Write a program to find the range of a set of numbers entered
through the keyboard. Range is the difference between the smallest
and biggest number in the list.*/

#include <stdio.h>
#include <limits.h>
// using standard c library func to get range of integers, i.e, INT_MIN & INT_MAX.
void main()
{
    int num, min = INT_MIN, max = INT_MAX;
    char ch = 'y';
    // same do-while loop from numcount.c
    do
    {
        printf("enter num: ");
        scanf("%d", &num);

        /*concept: (int_min < num < int_max). from here, 2 conditons arise:
                    i. num > int_min.
                    ii. num < int_max.*/
        if (num > min)
            min = num;
        if (num < max)
            max = num;

        printf("enter another? (y/n): ");
        scanf(" %c", &ch); // without the space in " %c", loop wont work.

    } while (ch == 'y');

    printf("range : %d\n", -(max - min));
}