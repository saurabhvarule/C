// Dangling Pointer : Part I -->>

#include<stdio.h>
int a = 10;
int b;
int *iptr;  //Pointer which has nothing

void fun()
{
  int z =30;
  printf("%d\n",a);
  printf("%d\n",b);
  printf("%p\n",&z);
  iptr = &z;    // giving adress of z to the pointer in fun function
  printf("%p\n",iptr);
}
void main()
{
  printf("%d\n",a);
  printf("%d\n",b);
  //printf("%d\n",*iptr); // -->>Segmentation Fault
  fun();    //after calling fun its stack will be poped
  printf("%p\n",iptr);
  printf("%d\n",*iptr);  // Still we can access data of z by its pointer.
  
}