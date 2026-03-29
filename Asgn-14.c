#include <stdio.h>

int main() {
    int binary, decimal = 0, base = 1, remainder;

    printf("Enter a binary number: ");
    scanf("%d", &binary);

    while (binary > 0) {
        remainder = binary % 10;       // get last digit
        decimal = decimal + remainder * base;
        binary = binary / 10;          // remove last digit
        base = base * 2;              // power of 2
    }

    printf("Decimal point equivalent = %d", decimal);

    return 0;
} 