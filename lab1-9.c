#include <stdio.h>

void convtime(double frng) {
    const double big1 = 5.0/9.0;
    const double big2 = 32;
    const double big3 = 273.16;
    double cels = big1*(frng-big2);
    double kelv = cels+big3;
    printf("%lf Fahrenheits is %lf Celsiuses and also equals %lf Kelvins\n",frng,cels,kelv);
}

int main() {
    double tempr;
    int quit = 0;//when quit is false then the program runs

    printf("enter the time in days to convert, enter 0 or less to exit: ");
    scanf("%lf", &tempr);

    while (quit==0) {
        convtime(tempr);
        printf("enter the time in days to convert, enter 0 or less to exit: ");
        if (scanf("%lf", &tempr) != 1) {
            quit=1;
        }
    }

    return 0;
}