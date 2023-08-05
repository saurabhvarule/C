#include<stdio.h>
void main()
{
  int num;
  printf("enter a number:\n");
  scanf("%d",&num);
  
  int sum = 0;
  for(int i=1; i<num; i++) {
    if(num%i==0) {
      sum = sum +i;
    }
  }
  if(sum == num) {
    printf("%d is a perfect number\n",num);
    }else{
      printf("%d is NOT a perfect number\n",num);    
  }
}