#include <stdio.h>
#include <math.h>

int main() {
    double sum1;
    double sum2;
    int itrt=1.0;//iterations

    while (1) {
        itrt++;
        sum1 += 1.0/itrt;
        sum2 += 1.0/itrt*pow(-1,itrt)*-1;
        if (0>=sum1||sum2<=0||itrt>100) {
            break;
        }
    }
    printf("%lf %lf",sum1,sum2);
    

    return 0;
}