#include <stdio.h>
#include <math.h>
void main() 
{
    int n, i, flag = 1;
    long long factorial = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0)
        printf("Square Root: Not defined for negative numbers\n");
    else
        printf("Square Root: %.2lf\n", sqrt(n));
  
    printf("Square: %d\n", n * n);

    printf("Cube: %d\n", n * n * n);

    if (n < 2)
        flag = 0;
    for (i = 2; i <= (int)sqrt(n); i++) 
    {
        if (n % i == 0)
        {
            flag = 0;
            break;
        }
    }
    if (flag)
        printf("%d is Prime\n", n);
    else
        printf("%d is Not Prime\n", n);

    if (n < 0)
        printf("Factorial: Not defined for negative numbers\n");
    else if (n > 20)
        printf("Factorial: Number too large\n");
    else
    {
        for (i = 1; i <= n; i++)
            factorial *= i;
        printf("Factorial: %lld\n", factorial);
    }

    if (n < 2)
    {
        printf("Prime Factors: Not defined\n");
    } else
    {
        printf("Prime Factors: ");
        int temp = n;
        for (i = 2; i <= temp; i++) 
        {
            while (temp % i == 0) 
            {
                printf("%d ", i);
                temp /= i;
            }
        }
        printf("\n");
    }
}
