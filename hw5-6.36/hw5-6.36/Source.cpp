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
    printf("��r��: %s\n", str);
    printf("�ϦV�C�L: ");
    stringReverse(str);  
    printf("\n");

    return 0;
}
