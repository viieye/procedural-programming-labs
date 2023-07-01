#include <stdio.h>
#include <math.h>

int main() {
    double sum1;
    double sum2;
    int int8[8];

    for (int i = 1; i <= 8; i++) {
        int8[i-1]=pow(2,i);
    }
    

    int itrt = 0;
    do {
        printf("%d, ",int8[itrt]);
        itrt++;
    }
    while (itrt<8);
    

    return 0;
}