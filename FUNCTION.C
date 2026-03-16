#include<stdio.h>
int add(int a, int b );
int sub(int a, int b );
int mul(int a, int b );
int factorial(int n);
float divi(int a, int b);

int main(){
    int choice ,a,b,n;
    do{
       printf('\n---menu---\n');
       printf('1.Addition\n');
       printf('2.subtraction\n');
       printf('3.multiplication\n');
       printf('4.division\n');
       printf('5.factorial\n');
       printf('5.exit\n');
       printf('Enter Your choice\n');
       scanf("%d , &choice");


switch(choice)
        {
            case 1:
                printf("Enter two numbers: ");
                scanf("%f %f", &a, &b);
                printf("Result = %.2f\n", add(a,b));
                break;
            case 2:
                printf("Enter two numbers: ");
                scanf("%f %f", &a, &b);
                printf("Result = %.2f\n", sub(a,b));
                break;
            case 3:
                printf("Enter two numbers: ");
                scanf("%f %f", &a, &b);
                printf("Result = %.2f\n", multiply(a,b));
                break;
            case 4:
                printf("Enter two numbers: ");
                scanf("%f %f", &a, &b);
                if(b != 0)
                    printf("Result = %.2f\n", divide(a,b));
                else
                    printf("Division by zero is not allowed\n");
                break;
            case 5:
                printf("Enter a number: ");
                scanf("%d", &num);
                printf("Factorial = %d\n", factorial(num));
                break;
            case 6:
                printf("Exiting program...\n");
                return 0;
            default:
                printf("Invalid choice!\n");
        }
    }
}




       
