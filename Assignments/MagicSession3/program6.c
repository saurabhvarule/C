#include<stdio.h>
int *ptr1 = NULL;

void fun () 
{
  int x = 10;
  ptr1 = &x;
  printf("%d\n",x);
  printf("%d\n",*ptr1);
  
}
void main()
{
  int x = 20;
  printf("%d\n",x);
  fun();
  printf("%d\n",*ptr1);
  
}
