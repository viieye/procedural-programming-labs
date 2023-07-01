#include <stdio.h>

void convtime(int minutes) {
    const int minsperaua = 60; //defined how many minutes are in an hour
    int hours = minutes / minsperaua; //hours floors the answer because it is defined an integer
    int minsleft = minutes % minsperaua; //mod takes care of the minutes that are left
    printf("time: %d hours and %d minutes \n",hours,minsleft);
}

int main() {
    int time;
    int quit = 0;//when quit is false then the program runs

    while (quit==0) {
        printf("enter the time in minutes to convert, enter 0 or less to exit: ");
        scanf("%d", &time);
        if (time <= 0) {
            quit=1;
        }
        convtime(time);
    }

    return 0;
}