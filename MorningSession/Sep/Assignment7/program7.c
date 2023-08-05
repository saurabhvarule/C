#include<stdio.h>
void main()
{
  int num;
  printf("enter a number :\n");
  scanf("%d",&num);
  int sum = 0;
  int dup = num;
  while(dup>0) {
    int temp = dup % 10;
    if(temp == 0){
      sum = 1;
    }
    int fact = 1;
    for(int i = 1; i<= temp; i++) {
      fact = fact * i;
    }
    sum += fact;
    dup /= 10;
    
  }
  if(sum == num){
    printf("%d is a Strong number \n",num);
  }else{
    printf("%d is a NOT a Strong number \n",num); 
  }
}