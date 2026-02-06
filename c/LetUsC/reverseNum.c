#include <stdio.h>
void main()
{

    int temp, num, rev = 0;
    printf("num: ");
    scanf("%d", &num);
    temp = num;

    while (num)
    {
        rev = rev * 10 + num % 10;
        num /= 10;
    }
    printf("rev = %d\n", rev);
    if (temp == rev)
        printf("num = rev");
    else
        printf("num != rev");
}