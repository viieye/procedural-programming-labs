#include <stdio.h>

#define maxlen 255

int main() {
    char input[maxlen + 1]; //input
    char reversed[maxlen + 1];//output
    int length = 0;  // input line length

    // Read the line of input
    printf("Enter a line of input (max %d characters):\n", maxlen);
    scanf("%255[^\n]", input);

    // Calculate the length of the input line
    while (input[length] != '\0') {
        length++;
    }

    // Reverse the line by copying characters in reverse order
    for (int i = 0; i < length; i++) {
        reversed[i] = input[length - i - 1];
    }
    reversed[length] = '\0';  // Add null terminator to the reversed line

    // Print the reversed line
    printf("Reversed line: %s\n", reversed);

    return 0;
}
