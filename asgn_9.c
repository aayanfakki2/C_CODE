#include <stdio.h>
void main() 
{
    int n, original, remainder, result = 0;
    
    scanf("%d", &n);
    original = n;
    
    while (original != 0) 
    {
        remainder = original % 10;
        result = result +( remainder * remainder * remainder);
        original = original / 10;
    }
    
    if (result == n)
        printf("Armstrong number");
    else
        printf("Not an Armstrong number");
}
