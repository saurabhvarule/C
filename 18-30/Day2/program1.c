/*
1). WAP and take one integer pointer, two integer pointer to an pointer and store address in it, Print that Data by
dereferencing all three Pointer.
*/

#include<stdio.h>
void main() {
  int x = 10;
  int *ptr1 = &x;
  int **ptr2 = &ptr1;    //pointer to an pointer
  int **ptr3 = &ptr1;

  // dereferencing pointer 
  printf("%d\n",*ptr1);
  printf("%d\n",**ptr2);
  printf("%d\n",**ptr3);
  
}