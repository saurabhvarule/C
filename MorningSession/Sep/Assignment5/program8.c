#include<stdio.h>
void main() {
  int start,end;
  printf("enter start and end value\n");
  scanf("%d",&start);
  scanf("%d",&end);
  if(start==0) {
    start = 1;
  }
  for(int i =start; i<end;i++) {
    int sum = 0;
    for(int j =1; j<i; j++) {
      if(i%j == 0) {
        sum += j;
      }
      
    }
    if(sum == i){
      printf("%d\n",i);       
    }
  }
}