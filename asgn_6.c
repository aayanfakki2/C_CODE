#include <stdio.h>
int fact(int n)
{
    if(n<=0)
    {
        return 1;
    }
    else
    {
        return (n*fact(n-1));
    }
}
void main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(n<0)
    {
        printf("Factorial for negative number is not possible");
    }
    else
    {
        printf("Factorial for %d is %d",n,fact(n));
    }
}
