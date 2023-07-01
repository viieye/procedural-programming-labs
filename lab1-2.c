#include <stdio.h>

int main() {
    int inpnum;
    printf("enter the number and it will count from it to and including a number highter by 10:\n");
    scanf("%d", &inpnum);
    for (int i = inpnum; i <= inpnum+10; i++) {
        printf("%d\n", i);
    }
}