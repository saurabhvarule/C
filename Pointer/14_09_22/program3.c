#include<stdio.h>
void main() 
{
  char ch1 = 'A';
  char ch2 = 'B';

  char *ptr1 = &ch1;
  char *ptr2 = &ch2;

  printf("%d\n",*ptr1 + * ptr2);  //-->> ascii addition of 65 + 66 = 131 so anser will be 131 it could be round up value cause char length is from -128 to 127 only if we stored the addition in the char datatype.
  
  //printf("%p\n",ptr1 + ptr2);  //-->>invalid operand for binary + (have char* and char*)
}