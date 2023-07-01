#include <stdio.h>

int main() {
    double firstArray[8];   // Array to store user-entered values
    double secondArray[8];  // Array to store cumulative totals

    // Read values into the first array
    printf("Enter eight values for the first array:\n");
    for (int i = 0; i < 8; i++) {
        scanf("%lf", &firstArray[i]);
    }

    // Calculate cumulative totals for the second array
    double sum = 0.0;
    for (int i = 0; i < 8; i++) {
        sum += firstArray[i];
        secondArray[i] = sum;
    }

    // Display the contents of the two arrays
    printf("First array: ");
    for (int i = 0; i < 8; i++) {
        printf("%.2lf ", firstArray[i]);
    }

    printf("\nSecond array: ");
    for (int i = 0; i < 8; i++) {
        printf("%.2lf ", secondArray[i]);
    }

    return 0;
}
