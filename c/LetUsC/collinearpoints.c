/*3C(j). Given three points  (x1, y1), (x2, y2) and (x3, y3), write a program 
to check if all the three points fall on one straight line.*/
#include <stdio.h>
#include <math.h>
void main()
{
    int x1, y1, x2, y2, x3, y3;
    printf("enter (x1, y1), (x2, y2), (x3, y3) : \n");
    scanf("%d%d%d%d%d%d", &x1,&y1,&x2,&y2, &x3,&y3);

    float d1=sqrt(pow(x2-x1, 2)+pow(y2-y1, 2));
    float d2=sqrt(pow(x2-x3, 2)+pow(y2-y3, 2));
    float d3=sqrt(pow(x3-x1, 2)+pow(y3-y1, 2));

    if(x1==x2 && y1==y2 || x1==x3 && y1==y3 || x2==x3 && y2==y3)
        printf("error! 3 points not given.\n");
    else
    {
        if(d1+d2==d3 || d1+d3==d2 || d2+d3==d1)
            printf("collinear points.\n");
        else
            printf("non-collinear points.");
    }
}