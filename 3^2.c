#include<stdio.h>

int main(void){
    int y = 10,i;
    printf("The count before execution is:%d",y);
    i = ++y + --y + y++ + y--;
   printf("\nThe count after execution is:%d",i);
    printf("\nBy Manan S Patel 23ce098.");
    return 0;
}