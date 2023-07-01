#include <stdio.h>

int main() {
    const double initinvst = 100.0;
    const double intrsrate1 = 0.08;
    const int dunbar = 150;

    int frendnum = 5;
    int week = 0;

    while (frendnum < dunbar) {
        frendnum += -week;
        frendnum += frendnum;
        week++;
    }

    printf("after %d weeks, Rabnud will reach dunbars number.\n", week);

    return 0;
}
