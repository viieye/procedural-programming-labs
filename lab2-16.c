#include <stdio.h>

int main() {
    const double initinvst = 100.0;
    const double intrsrate1 = 0.10;
    const double intrsrate2 = 0.05;

    double balans1 = initinvst;
    double balans2 = initinvst;
    int years = 0;

    while (balans1 >= balans2) {
        balans1 += initinvst * intrsrate1;
        balans2 += balans2 * intrsrate2;
        years++;
    }

    printf("After %d years, Deirdre's investment exceeds Daphne's investment.\n", years);
    printf("Daphne's balance: $%.2lf\n", balans1);
    printf("Deirdre's balance: $%.2lf\n", balans2);

    return 0;
}
