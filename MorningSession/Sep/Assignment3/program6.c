#include<stdio.h>
void main()
{
  int num;
  printf("enter a number to chech whether it is\n harshad or not ?\n");

  scanf("%d",&num);
  int dup = num;
  int sum = 0;
  while(dup>0) {
    sum = sum + (dup%10);
    dup /=10;
  }
  if(num%sum==0) {
    printf("%d is a harshad number\n",num);
  }
}