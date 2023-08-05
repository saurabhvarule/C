/*
3). Take an array of void pointer and store data of multiple datatype of element(int, char ,float) & Print the array.
*/

#include<stdio.h>

void main() {
  int x =10;
  char ch = 'A';
  float f = 30.5f;

  //array of void pointer;
  void (*ptr1[]) = {&x,&ch,&f};

  printf("%d\n",*((int*)ptr1[0]));
  printf("%c\n",*((char*)ptr1[1]));
  printf("%f\n",*((float*)ptr1[2]));
}