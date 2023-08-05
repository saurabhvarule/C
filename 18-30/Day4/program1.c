/*
1.Write a function which returns the addition of two numbers and
print the answer in main function.
*/
#include<stdio.h>

//function add()
int add(int x,int y) {
  return x+y;
}
void main() {
  int x;
  printf("enter first number :\n");
  scanf("%d",&x);
  
  int y;
  printf("enter second number :\n");
  scanf("%d",&y);

  //call to add funtion which returns addition of two integers
  printf("Addition of %d + %d = %d\n",x,y,add(x,y));
}