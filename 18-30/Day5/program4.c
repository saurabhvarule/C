/*
4.)WAP for concept of passing function to function.
*/
#include<stdio.h>
void gun() {
  printf("in gun\n");
}
void fun(void (*ptr)()) {
  ptr();
  printf("in fun\n");
}
void main() {
  printf("in main\n");
  fun(gun);
  
}

