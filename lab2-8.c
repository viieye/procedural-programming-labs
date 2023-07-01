#include <stdio.h>

int main() {
    double num1, num2;

    while (1) {
        printf("Enter two floating-point numbers (or non-numeric input to exit): ");
        
        if (scanf("%lf %lf", &num1, &num2) != 2) {
            break; //i used break this time as quit boolean was getting cumbersome
        }

        // Calculate and print the result
        double shvaoba = num1 - num2; //differrence
        double namravli = num1 * num2; //product of multiplication
        
        if (namravli != 0) {
            double pasuhi = shvaoba / namravli;
            printf("Result: %.5lf\n", pasuhi);
        } else {
            printf("Error: Cannot divide by zero\n");
        }
    }

    return 0;
}