//function pointer 

#include<stdio.h>
void fun(int x){
  printf("\nin fun");
  printf("\n%d",x);
}
void main() {
  printf("in main");

  //pointer which holds address of function :
  void (*ptr1)(int) = fun;
  ptr1(10);
  
}