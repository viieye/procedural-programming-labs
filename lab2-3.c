
#include <stdio.h>

int main() {
    char lets[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < i+1; j++) {
            printf("%c",lets[6-j-1]);
        }
        printf("\n");
    }

    return 0;
}