/*
2). WAP which shows a concept of void pointer and access data using void pointer(Don’t repeat class example).
*/

#include<stdio.h>

void main() {
  int x =10;
  char ch = 'A';

  void *ptr1 = &x;
  void *ptr2  = &ch;

  // void pointer cant be dereferenced directly,we should typecast it 

  printf("%d\n",*((int*)ptr1));
  printf("%c\n",*((char*)ptr2));

  
}