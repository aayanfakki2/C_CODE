#include <stdio.h>
void main()
{
    int m1, m2, m3, m4, m5;
    float total, aggregate;

    printf("Enter marks for course 1 from 0-100: ");
    scanf("%d", &m1);
    printf("Enter marks for course 2 from 0-100: ");
    scanf("%d", &m2);
    printf("Enter marks for course 3 from 0-100: ");
    scanf("%d", &m3);
    printf("Enter marks for course 4 from 0-100: ");
    scanf("%d", &m4);
    printf("Enter marks for course 5 from 0-100: ");
    scanf("%d", &m5);

    if (m1 < 0 || m1 > 100 || m2 < 0 || m2 > 100 ||m3 < 0 || m3 > 100 || m4 < 0 || m4 > 100 ||m5 < 0 || m5 > 100)
    {
        printf("Invalid input, Marks must be between 0 and 100.\n");
    }

    total = m1 + m2 + m3 + m4 + m5;
    aggregate = total / 5;

    printf("\nTotal Marks: %.0f\n", total);
    printf("Aggregate: %.2f%%\n", aggregate);

    if (m1 < 40 || m2 < 40 || m3 < 40 || m4 < 40 || m5 < 40) 
    {
        printf("Result: FAIL\n");
        printf("Grade: No Grade\n");
    }
    else 
    {
        printf("Result: PASS\n");
        if (aggregate > 75)
        {
            printf("Grade: Distinction\n");
        } 
        else if (aggregate >= 60)
        {
            printf("Grade: First Division\n");
        } 
         else if (aggregate >= 50)  
        {
            printf("Grade: Second Division\n");
        }  
        else 
        {
            printf("Grade: Third Division\n");
        }
    }
}
