#include <stdio.h>

int main(void)
{;
    int m, tp = 80000;
    float lm,tl, lw, ilm, ilw,wm;
    printf("The total population of the town is:%d", tp);
    tl = 0.48*tp;
    m = 0.52*tp;
    lm = 0.35*tp;
    ilm = .65*tp;
    lw = tl-lm;
    wm = tp-m;
    ilw = tp-lw;
    printf("\nThe number of literate people in the town is:%.3f",tl);
       printf("\nThe total number of men in the town is:%.3f",m);
       printf("\nThe number of literte men is:%.3f",lm);
       printf("\nThe number of illiterate men is:%.3f",ilm);
       printf("\nThe number of Women:%.3f",wm);
       printf("\nThe number of literate women:%.3f",lw);
       printf("\nThe number of illiterate Women:%.3f",ilw);
       printf("\nThis program is written by Manan S Patel 23ce098.");
    return 0;
}