#include<stdio.h>
void main() 
{
  //only addtion operations can be performed on pointers :
  int x =10;
  int * ptr1 = &x;
  printf("%p\n",ptr1-10);
  printf("%p\n",ptr1*10);
  printf("%p\n",ptr1/10);
  printf("%p\n",ptr1%10);

  //error -->> invalid operand type to binary(have int * and int*  )
}