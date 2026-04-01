#include<stdio.h>
void swap(int*a , int*b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main(){
    int num1 =5;
    int num2=10;
    printf("before swap: num1=%d, num2= %d \n",num1,num2);
    swap(&num1,&num2);
    printf ("after swap: num1=%d, num2=%d",num1,num2);
    return 0;
    
}



#include<stdio.h>

// Function accepts values, not addresses
void swap(int a, int b){                
    int temp = a;
    a = b;
    b = temp;                
    // Note: This only swaps the copies 'a' and 'b', 
    // not num1 and num2 in main. 
    // Therefore, swapping within a function without pointers
    // requires a different approach (like passing by struct or return).
}

int main(){
    int num1 = 5;
    int num2 = 10;
    
    printf("before swap: num1=%d, num2= %d \n", num1, num2);
    
    // Direct swapping inside main (best way without pointers)
    int temp = num1;
    num1 = num2;
    num2 = temp;
    
    printf ("after swap: num1=%d, num2=%d", num1, num2);                
    return 0;
}
