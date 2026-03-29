#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], result[200];
    int choice;

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    printf("\nMenu:");
    printf("\n1. Length of string");
    printf("\n2. Copy string");
    printf("\n3. Concatenate string");
    printf("\n4. Compare strings");
    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Length of first string = %lu", strlen(str1));
            break;

        case 2:
            strcpy(result, str1);
            printf("Copied string = %s", result);
            break;

        case 3:
            strcpy(result, str1);
            strcat(result, str2);
            printf("Concatenated string = %s", result);
            break;

        case 4:
            if(strcmp(str1, str2) == 0)
                printf("Strings are equal");
            else
                printf("Strings are not equal");
            break;

        default:
            printf("Invalid choice");
    }

    return 0;
} 