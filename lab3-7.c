#include <stdio.h>

void largof3sort(double *x, double *y, double *z) {
    double temp;
    if (*x > *y) {
        temp = *x;
        *x = *y;
        *y = temp;
    }
    if (*x > *z) {
        temp = *x;
        *x = *z;
        *z = temp;
    }
    if (*y > *z) {
        temp = *y;
        *y = *z;
        *z = temp;
    }
}

int main() {
    double num1, num2, num3;
    printf("enter three floats or doubles: ");
    scanf("%lf %lf %lf", &num1, &num2, &num3);

    largof3sort(&num1, &num2, &num3);
    printf("They are sorted: %lf %lf %lf\n", num1, num2, num3);

    return 0;
}
