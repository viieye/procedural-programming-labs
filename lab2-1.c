#include <stdio.h>

int main() {
    char aray[] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z',};
    
    printf("{");
    for (int i = 0; i < 26; i++) {
        printf("%c, ",aray[i]);
    }
    printf("}");

    return 0;
}