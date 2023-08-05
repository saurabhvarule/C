#include<stdio.h>
void main() 
{
  int x =10;
  int y =20;
  printf("%d\t",x);
  printf("%d\n",y);
  x = y;
  printf("%d\t",x);
  printf("%d\n",y);

  int z =30;
  int *iptr = &z;
  printf("%d\n",z);
  *iptr = 50;  // -->> if *iptr is on LHS it can update the data , it works as a container 

  printf("%d\n",*iptr);
  printf("%d\n",z);
}