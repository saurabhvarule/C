/*
3.WAP of swapping two numbers by using call by address.
*/

#include<stdio.h>
void swap(int *x,int *y) {
  *x = *x + *y;
  *y = *x - *y;
  *x = *x - *y;
}
void main() {
  
  int x;
  printf("enter first number :\n");
  scanf("%d",&x);
  
  int y;
  printf("enter second number :\n");
  scanf("%d",&y);
  
  printf("before swap x = %d & y = %d\n",x,y);
  swap(&x,&y);
  printf("after swap x = %d & y = %d\n",x,y);
}