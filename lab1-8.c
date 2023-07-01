#include <stdio.h>

int main() {
    int modr;
    int vctm;
    int quit = 0;//when quit is false then the program runs
    printf("This program computes moduli.");
    printf("Enter an integer to serve as the second operand: ");
    scanf("%d", &modr);
    int answ;

    while (quit==0) {
        printf("Enter an integer to serve as the first operand: ");
        scanf("%d", &vctm);

        if (vctm <= 0) {
            quit=1;
        }
        answ=vctm%modr;
        printf("%d %% %d is %d\n",vctm,modr,answ);
    }

    return 0;
}