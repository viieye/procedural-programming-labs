#include <stdio.h>

int main() {
    char leter;
    printf("Enter an uppercase letter: ");
    scanf("%c",&leter);
    int rownum = leter - 'A' + 1;

    for (int i = 0; i < rownum; i++) {

        for (int j = 0; j < rownum - i - 1; j++) {
            printf(" ");
        }
        for (int j = 0; j <= i; j++) {
            printf("%c",'A' + j);
        }
        for (int j = i - 1; j >= 0; j--) {
            printf("%c",'A' + j);
        }
        printf("\n");
    }

    return 0;
}