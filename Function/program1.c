#include<stdio.h>
void fun() {
  int x = 10;
  printf("in fun\n");
  printf("%d",x);
}
void main()
{
  //printf("%d",x);    error : value is assigned to x in a fun's stack frame
  fun();
  printf("in main \n");
  
  
}