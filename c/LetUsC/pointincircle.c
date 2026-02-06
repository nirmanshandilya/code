/*3C(k). Given the coordinates (x, y) of center of a circle and its radius, write 
a program that will determine whether a point lies inside the circle,
on the circle or outside the circle. (Hint: Use sqrt( ) and pow( ) functions)*/
#include <stdio.h>
#include <math.h>
void main()
{
    float rad, x1,y1,px,py;

    printf("\nenter coord of centre (x,y): \n");
    scanf("%f%f", &x1, &y1);
    printf("enter radius: \n");
    scanf("%f", &rad);
    printf("enter coord of req point (px, py): \n");
    scanf("%f%f", &px, &py);

    if(sqrt(pow(px-x1, 2) + pow(py-y1, 2)) == rad)
        printf("point is on circle\n");
    if(sqrt(pow(px-x1, 2) + pow(py-y1, 2)) < rad)
        printf("point is inside circle\n");
    if(sqrt(pow(px-x1, 2) + pow(py-y1, 2)) > rad)
        printf("point is outside circle\n");
}