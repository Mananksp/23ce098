#include<stdio.h>
#include<math.h>
#define PI = 3.14
int main(void){
    float l;
    float T,g;
    printf("Enter the value of the length:");
    scanf("%f",&l);
    printf("\nEnter the value of gravitational accleration:");
    scanf("%f",&g);
    T = 2*3.14*sqrt(l/g);
    printf("\nThe value of Time calculated is %.2f",T);
    printf("\nBy Manan Patel 23ce098.");
    return 0;
}