#include<stdio.h>
void main() 
{
  long int start;
  long int end;
  printf("enter a start value :\n");
  scanf("%ld",&start);
  printf("enter a end value :\n");
  scanf("%ld",&end);
  if(start == 0)
    start = 1;
  
  for(long int i = start; i<end; i++){
    long int sum = 0;
    long int dup = i;
    while(dup>0){
      long int fact = 1; 
      long int temp = dup % 10;
      for(long int j=1; j<=temp; j++){ 
        fact = fact *j;
      }
      sum = sum + fact;
      dup = dup / 10;
    }
    if(sum == i){
      printf("%ld\n",i);
    }
  }
}