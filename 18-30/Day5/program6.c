/*
6.)WAP to take number from user in retval() function and return the first and last digit of
that number in main function and print.
*/

#include<stdio.h>

int retVal(int *ptr) {
  int dup = *ptr;
  int first,last;
  last = *ptr%10;
  
  int rev = 0;
  while(dup>0) {
    rev = rev * 10 + dup %10;
    dup /= 10;
  }
  
  first = rev%10;
  return first*10 + last;
}

void main() {
  int x;
  printf("enter a number :\n");
  scanf("%d",&x);

  int val = retVal(&x);
  printf("%d\n",val);
}