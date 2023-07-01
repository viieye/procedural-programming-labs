#include <stdio.h>

int main() {
    int lwbn;
    int hibn;
    printf("Enter an lower bound number: ");
    scanf("%d",&lwbn);
    printf("Enter an upper bound number: ");
    scanf("%d",&hibn);

    for (int i = lwbn; i <= hibn; i++) {
        printf("%d | ",i);
        printf("%d | ",i*i);
        printf("%d \n",i*i*i);
    }

    return 0;
}