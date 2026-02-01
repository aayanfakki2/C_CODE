#include <stdio.h>

int main() {
    float a, b;

    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    printf("\nAddition = %.2f", a + b);
    printf("\nSubtraction = %.2f", a - b);
    printf("\nMultiplication = %.2f", a * b);

    if (b != 0) {
        printf("\nDivision = %.2f", a / b);
    } else {
        printf("\nDivision not possible (division by zero)");
    }

    return 0;
}
