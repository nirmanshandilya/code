#include <stdio.h>
void main()
{
    int i, num, temp, arm, rem;
    printf("\nall armstrong nos. betn 1-500 are:\n");
    for (i = 1; i < 501; i++)
    {
        arm = 0;
        temp = num = i;
        while (num)
        {
            rem = num % 10;
            arm = arm + rem * rem * rem;
            num /= 10;
        }
        if (temp == arm)
            printf("\t%3d\n", temp);
    }
}