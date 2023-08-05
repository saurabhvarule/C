#include<stdio.h>
void main() 
{
  int first;
  int last;
  printf("enter first & last number \n");
  scanf("%d %d",&first,&last);
  printf("Harshad numbers from %d to %d are :\n",first,last);
  for(int i = first; i<last; i++){
    int dup = i;
    int sum = 0;
    while(dup>0){
      sum += dup%10;
      dup/=10;
    }
    if(i%sum ==0){
      printf("%d\n",i);
    }
  }
  
}