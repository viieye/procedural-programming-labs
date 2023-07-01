#include <stdio.h>

int fibonacci(int prev1,int prev2) {
    return prev1 + prev2;
}

int main() {
    int maxlen;
    printf("max length of fibonacci sequence\n");
    scanf("%d",&maxlen);
    int array[maxlen];


    // Read values into the first array
    array[0]=0;
    array[1]=1;
    printf("%d, %d, ",array[0],array[1]);
    for (int i = 2; i < maxlen; i++) {
        array[i]=fibonacci(array[i-2],array[i-1]);
        printf("%d, ",array[i]);
    }


    return 0;
}
