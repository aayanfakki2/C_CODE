#include <stdio.h>
void main()
{
    int choice;
    double x, y, result;

    printf("Calculator Menu:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Power (x^y)\n");
    printf("6. Factorial (x!)\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    if (choice >= 1 && choice <= 5) 
    {
        printf("Enter x: ");
        scanf("%lf", &x);
        if (choice != 6) 
        {
            printf("Enter y: ");
            scanf("%lf", &y);
        }
    }
    else if (choice == 6)
    {
        printf("Enter x: ");
        scanf("%lf", &x);
    }

    switch (choice)
    {
        case 1:
            result = x + y;
            printf("Result: %.2lf\n", result);
            break;

        case 2:
            result = x - y;
            printf("Result: %.2lf\n", result);
            break;

        case 3:
            result = x * y;
            printf("Result: %.2lf\n", result);
            break;

        case 4:
            if (y == 0)
                printf("Error: Division by zero is not possible.\n");
            else 
            {
                result = x / y;
                printf("Result: %.2lf\n", result);
            }
            break;

        case 5:
            result = 1;
            for (int i = 0; i < (int)y; i++)
              result = result * x;
            printf("Result: %.2lf\n", result);
            break;

        case 6:
            result = 1;
            for (int i = 1; i <= (int)x; i++)
                result *= i;
            printf("Result: %.2lf\n", result);
            break;

        default:
            printf("Invalid choice\n");
    }
}
