#include <stdio.h>

void convtime(int days) {
    const int daysperweek = 7; //defined how many days are in an week
    int weeks = days / daysperweek; //week floors the answer because it is defined an integer
    int daysleft = days % daysperweek; //mod takes care of the days that are left
    printf("time: %d weeks and %d days \n",weeks,daysleft);
}

int main() {
    int time;
    int quit = 0;//when quit is false then the program runs

    while (quit==0) {
        printf("enter the time in days to convert, enter 0 or less to exit: ");
        scanf("%d", &time);
        if (time <= 0) {
            quit=1;
        }
        convtime(time);
    }

    return 0;
}