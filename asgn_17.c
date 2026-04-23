#include <stdio.h>
#include <math.h>
int main() {
    int n, i;
    float x, sum, term, sign, fact;
    printf("Enter the angle x (in degrees): ");
    scanf("%f", &x);
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    float rad = x * (3.14159 / 180.0);
    sum  = 0;
    sign = 1;
    for (i = 0; i < n; i++) {
        int power = 2 * i + 1;
        fact = 1;
        int j;
        for (j = 1; j <= power; j++)
            fact = fact * j;
        term = sign * pow(rad, power) / fact;
        sum  = sum + term;
        sign = sign * (-1);
        printf("Term %d = %.6f\n", i + 1, term);
    }
    printf("\nSum of sine series = %.6f\n", sum);
    printf("Actual sin(%.2f) = %.6f\n", x, sin(rad));
    return 0;
}
