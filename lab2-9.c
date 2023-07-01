#include <stdio.h>

void calcthign(double frstnum,double skndnum) {
        // Calculate and print the result
        double shvaoba = frstnum - skndnum; //differrence
        double namravli = frstnum * skndnum; //product of multiplication
        
        if (namravli != 0) {
            double pasuhi = shvaoba / namravli;
            printf("result: %.5lf\n", pasuhi);
        } else {
            printf("error: cannot divide by zero\n");
        }
}

int main() {
    double num1, num2;

    while (1) {
        printf("enter two floating-point numbers, input a non-numeral to exit: ");
        
        if (scanf("%lf %lf", &num1, &num2) != 2) {
            break; //i used break this time as quit boolean was getting cumbersome
        }
        calcthign(num1,num2);
    }

    return 0;
}