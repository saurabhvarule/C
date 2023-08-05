/*
5.Write a function which returns the reverse number of the given
number.
*/
#include<stdio.h>

int revNum(int x) {
  int dup = x;
  int rev = 0;
  while(dup>0) {
    rev = rev * 10 + dup % 10;
    dup/=10;
  }
  x = rev;
  return x;
}

void main() {
  
  int x;
  printf("enter a number:\n");
  scanf("%d",&x);
  printf("Before reverce : %d \n",x);
  printf("after reverce : %d \n",revNum(x));

  }