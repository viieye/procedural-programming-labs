#include <stdio.h>

double harmmean(double x, double y) {
    return 2.0 / (1.0 / x + 1.0 / y);
}

int main() {
    double num1, num2;
    printf("enter two floats or doubles:");
    scanf("%lf %lf",&num1,&num2);
    printf("the harmonic mean of %lf and %lf is %lf",num1,num2,harmmean(num2, num1));
    return 0;
}
