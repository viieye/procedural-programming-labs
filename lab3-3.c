#include <stdio.h>

int main() {
    char smolchar;
    int rows,kolums;
    printf("enter a character, and two integers (rows,columns):");
    scanf("%c %d %d",&smolchar, &rows, &kolums);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < kolums; j++) {
            printf("%c",smolchar);
        }
        printf("\n");
    }
    return 0;
}