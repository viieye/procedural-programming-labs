/* addemup.c -- five kinds of statements */
#include <stdio.h>
int main(void)                /* finds sum of first 20 integers */
{
    int count, sum, fullnum;           /* declaration statement          */ //addded int variable to replace 20
    scanf("%d",&fullnum); //added a input of fullsaum to replace 20

    count = 0;                /* assignment statement           */
    sum = 0;                  /* ditto                          */
    while (count++ < fullnum)      /* while                          */ //here was the change where i replaced 20 with a variable
        sum = sum + count;    /*     statement                  */
    printf("sum = %d\n", sum);/* function statement             */

    return 0;                 /* return statement               */
}