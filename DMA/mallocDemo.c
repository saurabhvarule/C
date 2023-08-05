#include<stdio.h>
#include<stdlib.h>

void main() {

  int* x = (int*)malloc(sizeof(int)); // -->> malloc return address thats why we took pointer for it and also its return type is void* thats we typecasted it into int*
  int y =20;
  *x = 10;
  printf("%p\n",x);
  printf("%p\n",&y);
  printf("%d\n",*x);
  printf("%d\n",y);

  

  
}