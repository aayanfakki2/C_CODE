#include<stdio.h>
#include<string.h>
int main (){
  char binary[50];
  int len,i;
  printf("enter a binary number:");
  scanf("%s",&binary);
  len= strlen(binary);
  for (i==0;i<len;i++){
    printf("%c x 2^%d",binary[i],len-i-1);

    if (i!=len-1){
      printf("+");
    }
  }
  printf("\n");
  return 0;
}
