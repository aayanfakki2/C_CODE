#include <stdio.h>

// Function prototype
long long power(int base, int exp);

int main() {
    int base, exp;

    printf("Enter base: ");
    scanf("%d", &base);
    printf("Enter exponent (positive): ");
    scanf("%d", &exp);

    if (exp < 0) {
        printf("This basic version handles positive exponents only.\n");
    } else {
        printf("%d^%d = %lld\n", base, exp, power(base, exp));
    }

    return 0;
}

/**
 * Recursive function to calculate base^exp
 */
long long power(int base, int exp) {
    if (exp == 0) {
        return 1; // Base case
    }
    return base * power(base, exp - 1); // Recursive call
}
