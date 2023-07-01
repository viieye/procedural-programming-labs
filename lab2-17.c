#include <stdio.h>

int main() {
    const double initinvst = 100.0;
    const double intrsrate1 = 0.08;
    const double intrsrate2 = 100000;

    double balans1 = 1000000.0;
    int years = 0;

    while (balans1 > 0) {
        balans1 += balans1 * intrsrate1;
        balans1 += -intrsrate2;
        years++;
    }

    printf("after %d years, Chuckie will run out of lotterry money.\n", years);

    return 0;
}
