#include<stdio.h>

int main(void){
    int BS,IT;
    float DA,HRA,MA,TA,PF,grosssalry,netsalry; \
    printf("Enter your basic salary:");
    scanf("%d",&BS);
    DA = 0.7*BS;
    HRA = 0.07*BS;
    MA = 0.02*BS;
    TA = 0.04*BS;
    PF = 0.12*BS;
    IT = 500;
    grosssalry = BS+(DA+MA+TA+HRA);
    netsalry =grosssalry -(PF+IT);
    printf("\nThe DA of your salary is:%.3f",DA);
    printf("\nThe HRA of your salary is:%.3f",HRA);
    printf("\nThe MA of your salary is:%.3f",MA);
    printf("\nThe TA of your salary is:%.3f",TA);
    printf("\nThe PF of your salary is:%.3f",PF);
    printf("\nThe Gross salary of your salary is:%.3f",grosssalry);
    printf("\nYour Net salary is:%.3f",netsalry);

    return 0;
}