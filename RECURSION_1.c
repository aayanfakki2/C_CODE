unsigned long long factorial(int n);
int main() {
int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Error: Factorial is not defined for negative numbers.\n");
    } else {
        printf("Factorial of %d = %llu\n", num, factorial(num));
    }

    return 0;
}
unsigned long long factorial(int n) {
    // Base case: 0! and 1! are 1
    if (n <= 1) {
        return 1;
    }
return n * factorial(n - 1);
}
