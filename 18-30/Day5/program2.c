/*
2.)WAP to print the Multiplication of two number using Function Pointer(write a mult
function and print the multiplied value in main function).
*/

#include<stdio.h>
void (*ptr)(long int,long int);

void mult(long int x,long int y) {
  printf("%ld * %ld = %ld\n",x,y,x*y);
}
void main() {
  int x;
  printf("enter first number :\n");
  scanf("%d",&x);
  
  int y;
  printf("enter second number :\n");
  scanf("%d",&y);
  ptr = mult;
  ptr(x,y);
}