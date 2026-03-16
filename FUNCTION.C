#include<stdio.h>
int add(int a, int b );
int sub(int a, int b );
int mult(int a, int b );
int factorial(int n);
float divi(int a, int b);

int main(){
    int choice ,a,b,n;
    do{
       printf("\n---menu---\n");
       printf("1.Addition\n");
       printf("2.subtraction\n");
       printf("3.multiplication\n");
       printf("4.division\n");
       printf("5.factorial\n");
       printf("6.exit\n");
       printf("Enter Your choice\n");
       scanf("%d , &choice");


switch(choice)
        {
            case 1:
                printf("Enter two numbers: ");
                scanf("%d %d", &a, &b);
                printf("Result = %d\n", add(a,b));
                break;
            case 2:
                printf("Enter two numbers: ");
                scanf("%d %d", &a, &b);
                printf("Result = %d\n", sub(a,b));
                break;
            case 3:
                printf("Enter two numbers: ");
                scanf("%d %d", &a, &b);
                printf("Result = %d\n", mult(a,b));
                break;
            case 4:
                printf("Enter two numbers: ");
                scanf("%f %f", &a, &b);
                printf("Result= %2.f\n", divi(a,b));
				break;
            case 5:
                printf("Enter a number: ");
                scanf("%d", &n);
                printf("Factorial = %d\n", factorial(n));
                break;
            case 6:
                printf("Exiting program...\n");
                return 0;
            default:
                printf("Invalid choice!\n");
        }
    } 
while (choice!=6);
return 0;
   
}
int add (int a, int b){
return a+b;}
int sub (int a , int b){
         return a-b ;}
int mult(int a, int b){
         return a*b;
}
float divi(int a , int b){
     if (b==0){
				printf("Division by zero not possi\n");
				return 0;
}
			return (float)a/ b;
	 }
int factorial(int n){
      int i,fact =1 ;
      for (i=1;i<=n;i++){
			fact=fact*1;
}
return fact;
}
    
        



       
