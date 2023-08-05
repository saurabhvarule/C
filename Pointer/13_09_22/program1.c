#include<stdio.h>
void main() 
{
  int x = 10;
  printf("%d\n",x);
  printf("%p\n",&x);

  int *ptr1 = &x;
  printf("%p\n",ptr1);

  int *ptr2 = x;
  printf("%p\n",ptr2);
  //printf("%d\n",*ptr2); //-->>Segmentation fault(core dump)
  
}