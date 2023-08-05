#include<stdio.h>
void main()
{
  int x =10;
  int *iptr = &x;
  void *vptr =&x;
  printf("%p\n",iptr);
  printf("%p\n",vptr);

  //void pointer is a generic pointer whic can store adresses of all things 

  //void pointer can not be dereferened directly
  printf("%d\n",*iptr);
  //printf("%p\n",*vptr);  //-->>error invalid use of void expression

  //void pointer can be dereference explicitely by typecasting -->>
  
  printf("%d\n",(*(int*)vptr)); // 10
  
}