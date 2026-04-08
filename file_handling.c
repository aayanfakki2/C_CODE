#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *fp = NULL;
    char text[100];
    char buffer[100];

    // Open file in write mode
    fp = fopen("sample.txt", "w");
    if (fp == NULL) {
        printf("Error opening file for writing!\n");
        exit(1);
    }

    fputs("hello students\n", fp);
    fputs("Welcome to file Handling in C\n", fp);

    strcpy(text, "this line is written using fwrite.\n");
    fwrite(text, sizeof(char), strlen(text), fp);   // Better to write only actual content

    fclose(fp);

    // Re-open file in read mode
    fp = fopen("sample.txt", "r");
    if (fp == NULL) {
        printf("Error opening file for reading!\n");
        exit(1);
    }

    printf("Reading file using fgets():\n");
    while (fgets(buffer, sizeof(buffer), fp) != NULL) {
        printf("%s", buffer);
    }

    // Reset file pointer to beginning
    fseek(fp, 0, SEEK_SET);

    printf("\nReading file using fread():\n");

    // Clear buffer before fread
    memset(buffer, 0, sizeof(buffer));
    fread(buffer, sizeof(char), sizeof(buffer) - 1, fp);  // Leave space for null terminator
    printf("%s", buffer);

    if (feof(fp)) {
        printf("\nEnd of file reached.\n");
    }

    fclose(fp);
    return 0;
}
