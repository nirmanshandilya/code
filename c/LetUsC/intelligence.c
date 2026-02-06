#include <stdio.h>

void main()
{
    float i, y, x = 5.5;
    printf("____________________________\n");
    printf("|  x    |  y     |  i    |\n");
    printf("|-------|--------|-------|\n");

    for (y = 1; y <= 6; y++)
    {
        for (x = 5.5; x <= 12.5; x += 0.5)
        {
            printf("%5.2f   |%5.2f   |%5.2f   \n", x, y, (2 + (y + (0.5) * x)));
        }
        printf("____________________________\n");
    }
}