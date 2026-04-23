#include <stdio.h>
#include <string.h>
void displayMenu() {
    printf("\nSTRING OPERATIONS MENU\n");
    printf("1. Find Length       (strlen)\n");
    printf("2. Copy String       (strcpy)\n");
    printf("3. Concatenate       (strcat)\n");
    printf("4. Compare Strings   (strcmp)\n");
    printf("5. Find Substring    (strstr)\n");
    printf("0. Exit\n");
    printf("Enter your choice: ");
}
int main() {
    int choice;
    char str1[20], str2[20];
    displayMenu();          
    scanf("%d", &choice); 
    while (choice != 0) {  
        switch (choice) {
            case 1:
                printf("Enter a string: ");
                scanf("%s", str1);
                printf("Length of \"%s\" = %d\n", str1, strlen(str1));
                break;
            case 2:
                printf("Enter source string: ");
                scanf("%s", str1);
                strcpy(str2, str1);
                printf("Copied string: \"%s\"\n", str2);
                break;
            case 3:
                printf("Enter first string:  ");
                scanf("%s", str1);
                printf("Enter second string: ");
                scanf("%s", str2);
                strcat(str1, str2);
                printf("After concatenation: \"%s\"\n", str1);
                break;
            case 4:
                printf("Enter first string:  ");
                scanf("%s", str1);
                printf("Enter second string: ");
                scanf("%s", str2);
                int result = strcmp(str1, str2);
                if (result == 0)
                    printf("Strings are EQUAL.\n");
                else
                    printf("Strings are NOT equal.\n", str1, str2);
                break;
            case 5:
                printf("Enter main string : ");
                scanf("%s", str1);
                printf("Enter substring to find : ");
                scanf("%s", str2);
                char *pos = strstr(str1, str2);
                if (pos)
                    printf("Substring found at position %d.\n", (int)(pos - str1));
                else
                    printf("Substring NOT found.\n");
                break;
            default:
                printf("Invalid choice! Please enter from 0-5.\n");
        }
        choice = 0; 
    }
    printf("Exit!\n");
    return 0;
}
