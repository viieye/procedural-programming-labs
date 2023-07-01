#include <stdio.h>

void min(double x, double y) {
    if (x>y) {
        printf("%lf\n", y);
        return y;
    } else {
        printf("%lf\n", x);
        return x;
    }
}

int main() {
    const double initinvst = 100.0;
    const double intrsrate1 = 0.08;
    const int dunbar = 150;

    double num1, num2;
    scanf("%lf %lf",&num1,&num2);
    min(num2, num1);
    return 0;
}
