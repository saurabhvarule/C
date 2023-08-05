/*
Concept of array of pointer :
*/

#include<stdio.h>
void main() {
  int x = 10;
  int y = 20;

  int* arr1[2] = {&x,&y};  // -->> array of pointers which holds addresses of x and y.

  printf("%p\n",&x);
  printf("%p\n",&y);
  for(int i=0; i<2; i++) {  
    printf("%p\n",arr1[i]);
  }
  for(int i=0; i<2; i++) {  
    printf("%d\n",*(*(arr1+i)));
  }
}