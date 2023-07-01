#include <stdio.h>

void largof(double *x, double *y) {
    if (*x > *y) {
        *y=*x;
    } else {
        *x=*y;
    }
}

int main() {
    double num1, num2;
    printf("enter two floats or doubles:");
    scanf("%lf %lf",&num1,&num2);
    largof(&num2, &num1);
    printf("the lagref of two numbers will replace both %lf and %lf",num1,num2);
    return 0;
}
