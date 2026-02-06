//for testing random code.

#include <stdio.h>
void main(){
    float tempC, tempF;
    printf("enter temp in fahrenheit: ");
    scanf("%f", &tempF);
    tempC = (tempF-32)*5/9;
    printf("temp in celsius is %0.2f deg celsius", tempC);
}