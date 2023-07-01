#include <stdio.h>

int main() {
    int lwbn, hibn;

    while (1) {
        // Request input
        printf("enter lower and upper integer limits: ");
        scanf("%d %d", &lwbn, &hibn);

        // Check if the upper limit is less than or equal to the lower limit
        if (hibn <= lwbn) {
            break;  // Exit the loop
        }

        // Calculate the sum of squares
        int sum = 0;
        for (int i = lwbn; i <= hibn; i++) {
            sum += i * i;
        }

        // Print the result
        printf("The sum of the squares from %d to %d is %d\n", lwbn * lwbn, hibn * hibn, sum);
    }

    printf("Done\n");
    return 0;
}
