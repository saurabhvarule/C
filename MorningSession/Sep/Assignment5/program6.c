#include<stdio.h>
void main() {
  int num;
  printf("enter a number\n");
  scanf("%d",&num);

  int dup = num;
  int count = 0;
  if(num>=0 && num<10) {
    printf("there is 1 digit in %d\n",num);
  }
  else{
    while(dup>0) {
      dup/= 10;
      count++;
    }
    
    printf("there are %d digits in %d\n",count,num);
  }  
  
}