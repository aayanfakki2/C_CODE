#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n, i;

    printf("Enter how many random numbers you want: ");
    scanf("%d", &n);

    srand(time(0));   // initialize seed using current time

    printf("Pseudo Random Numbers:\n");

    for(i = 1; i <= n; i++) {
        printf("%d\n", rand());
    }

    return 0;
} 