/*8.2. Write a program to count the no. of students belonging to each group of marks 0-9, 10-19, 20-29,...*/

#include <stdio.h>
void main()
{
    int stud, group[11] = {0}, low, high, i; // group[] is a frequency counter array with all elem 0

    printf("no. of students? : ");
    scanf("%d", &stud);

    int marks[stud]; // cant define marks[stud] before defining how many students in int stud. else error.
    printf("enter marks:\n");

    for (i = 0; i < stud; i++)
    {
        // READING OF VALUES
        scanf("%d", &marks[i]);
        // COUNTING FREQ OF GROUPS
        ++group[(marks[i] / 10)];

        // eg: if marks[2]=43, then 4th elem of freq counter array group[4], i.e, (40-49 range) increases by +1 to show that one student has marks betn 40-49 range
    }
    printf("GROUP    RANGE    FREQ\n\n");
    for (i = 0; i < 11; i++)
    {
        low = i * 10; // low-high only to print the range of marks like 0-9, 10-19, 20-29, etc.
        if (low == 100)
            high = 100;
        else
            high = low + 9;

        printf("%2d    %3d to %3d    %2d\n", i + 1, low, high, group[i]);

        //%2d,%3d means it reserves 2,3 boxes resp. for storing those integers in memory. so, they appear right-aligned
    }
}
