#include <stdio.h>

int main() {
    int numbs[8];

    printf("enter the 8 integers:\n");
    for (int i = 0; i < 8; i++) {
        scanf("%d", &numbs[i]);
    }

    for (int i = 7; i >= 0; i--) {
        printf("%d, ", numbs[i]);
    }
    printf("\n");

    return 0;
}