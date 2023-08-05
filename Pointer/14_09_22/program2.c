#include<stdio.h>

void main()
{
  int x = 10;
  int y =20;
  char ch = 'A';

  int *ptr1 = &x;
  int *ptr2 = &y;
  char *ptr3 = &ch;

  printf("%p\n",ptr1);
  printf("%p\n",ptr2);

  //printf("%p\n",ptr1+ptr2);    -->>invalid operand to  binary + (have int* and int*)
    
  
  
}