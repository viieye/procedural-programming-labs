#include <stdio.h>

void cubethedubl(double num) {
    double num2 = num*num*num;
    printf("%lf",num2);
}

int main() {
    double num;
    printf("enter a double: ");
    scanf("%lf", &num);
    cubethedubl(num);

    return 0;
}