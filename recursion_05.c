#include <stdio.h>

// Recursive function to reverse the number
// 'rev' stores the accumulated reversed value
int reverse(int n, int rev) {
    // Base case: when n becomes 0, return the accumulated result
    if (n == 0) {
        return rev;
    }
    
    // Logic: 
    // 1. Take the last digit: (n % 10)
    // 2. Add it to the reversed result shifted left: (rev * 10)
    // 3. Move to the next digit: (n / 10)
    return reverse(n / 10, rev * 10 + (n % 10));
}

int main() {
    int num;
    printf("Enter a number to reverse: ");
    scanf("%d", &num);

    int result = reverse(num, 0);
    printf("Reversed Number: %d\n", result);

    return 0;
}
