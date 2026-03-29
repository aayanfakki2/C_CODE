#include <stdio.h>

// Define structure
struct student
{
    int roll;
    char name[50];
    float m1, m2, m3;
    float total, percentage;
};

int main()
{
    struct student s[100];
    int n, i;

    printf("Enter number of students: ");
    scanf("%d", &n);

    // Input details
    for (i = 0; i < n; i++)
    {
        printf("\nEnter details of student %d\n", i + 1);

        printf("Roll Number: ");
        scanf("%d", &s[i].roll);

        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Marks in 3 subjects: ");
        scanf("%f %f %f", &s[i].m1, &s[i].m2, &s[i].m3);

        // Calculate total and percentage
        s[i].total = s[i].m1 + s[i].m2 + s[i].m3;
        s[i].percentage = s[i].total / 3;
    }

    // Display result
    printf("\nStudent Results:\n");

    for (i = 0; i < n; i++)
    {
        printf("\nRoll No: %d", s[i].roll);
        printf("\nName: %s", s[i].name);
        printf("\nTotal Marks: %.2f", s[i].total);
        printf("\nPercentage: %.2f%%\n", s[i].percentage);
    }

    return 0;
} 