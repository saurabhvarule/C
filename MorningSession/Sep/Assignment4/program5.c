#include<stdio.h>
void main() 
{
  int length;
  printf("how many fibonacci number\n do you want to print?\n");
  scanf("%d",&length);
  if(length>0){
    int a = 0;
    int b = 1;
    int sum = 0;
    for(int i=0; i<length; i++){
      printf("%d\t",sum);
      a = b;
      b = sum;
      sum = a + b;
    }
    
    
  }else{
    printf("thank you have a good day!\n");
  }
}