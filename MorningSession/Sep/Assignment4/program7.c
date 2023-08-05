#include<stdio.h>
void main()
{

  int num;
  printf("enter a number \n");
  scanf("%d",&num);
  
  int sum = 0;
  int dup = num;
  while(dup>0){
    sum += dup % 10;
    dup /= 10;
  }
  if(num%sum == 0){
    printf("%d is a niven number\n",num);
    }else{
      printf("%d is a not a niven number\n",num);
    
  }
}