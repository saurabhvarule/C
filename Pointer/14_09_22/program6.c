#include<stdio.h>
void main()
{
  char ch1 = 'A';
  char ch2 ='B';

  char *ptr1 = &ch1;
  char *ptr2 = &ch2;

  //printf("%c\n",*(ptr1 + 1.5));//-->> invlaid operand to binary + (have char* and double)

  //we can only add pointer and integer 
}