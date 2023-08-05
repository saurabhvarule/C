//   Reverse a number
#include<stdio.h>
void main() 
{
  long int num;
  printf("Enter a number\n");
  scanf("%ld",&num);
  long int dup = num;
  long int rev =0;
  while(dup>0) {
    rev = rev * 10 + (dup%10);
    dup /= 10;
  }
  printf("Reverse of %ld = %ld \n",num,rev);
  
}