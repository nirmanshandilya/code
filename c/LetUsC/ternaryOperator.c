#include <stdio.h>
void main(){
    char ch;
    printf("enter char: ");
    scanf("%c", &ch);
    ch>='A' && ch<='Z'? printf("uppercase") 
            : printf("lowercase");
}