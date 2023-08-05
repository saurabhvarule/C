//  Digits count in a number

#include<stdio.h>
void main() 
{
  long int num;
  printf("enter a number :\n");
  scanf("%ld",&num);
  long int dup = num;
  int count = 0;

  if(num>= 0 && num<10) {
    printf("digits count in %ld is 1\n",num);
  }else{
    while(dup>0) {
      dup/=10;
      count++;
    }
    printf("digits count in %ld are %d\n",num,count); 
  }
}