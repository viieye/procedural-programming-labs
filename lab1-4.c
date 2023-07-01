#include <stdio.h>

void convhegh(int cencm) {
    float incs = cencm/2.54;
    const int incsperfoot = 12;
    int feet = incs / incsperfoot;
    float incsleft = incs-feet*incsperfoot;
    printf("%f cm = %d feet, %f inches\n", cencm ,feet,incsleft);
}

int main() {
    float cm;
    int quit = 0;//when quit is false then the program runs

    while (quit==0) {
        printf("Enter a height in centimeters (<=0 to quit): ");
        scanf("%d", &cm);
        if (cm <= 0) {
            quit=1;
        }
        convhegh(cm);
    }

    return 0;
}