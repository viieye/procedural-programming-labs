#include <stdio.h>
#include <string.h>

void rvrsmsg(char* message) {
    int length = strlen(message);
    int i, j;
    char temp;

    for (i = 0, j = length - 1; i < j; i++, j--) {
        // Swap characters
        temp = message[i];
        message[i] = message[j];
        message[j] = temp;
    }
}

int main() {
    char message[100];
    printf("input text here:");
    scanf("%s",&message);

    rvrsmsg(message);

    printf("%s", message);
    return 0;
}