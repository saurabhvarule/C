#include<stdio.h>
void main() {
  int num;
  printf("enter number :\n");
  scanf("%d",&num);
  int dup = num;
  int sum = 0;
  while(dup > 0) {
    int temp = dup % 10;
    if(temp %2 ==0) {
      sum +=temp;
    }
    dup/=10;
  }
  printf("the sum of even digits of number %d is %d ",num,sum);
}