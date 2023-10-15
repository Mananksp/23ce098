#include<stdio.h>

int main(void){
    int a,b,c;
    printf("Enter any two values of your choice:");
    scanf("%d %d",a,b);
    c = a;
    a =b;
    b = c;
    printf("The value of number after swapping is:",a,b);
    return 0;
}