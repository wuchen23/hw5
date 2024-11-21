#include <stdio.h>

void stringReverse(const char* str) {
 
    int length = 0;
    while (str[length] != '\0') {
        length++; 
    }

    for (int i = length - 1; i >= 0; i--) {
        putchar(str[i]);  
    }
}

int main() {
    const char str[] = "Hello, World!";
    printf("­ì¦r¦ê: %s\n", str);
    printf("¤Ï¦V¦C¦L: ");
    stringReverse(str);  
    printf("\n");

    return 0;
}
