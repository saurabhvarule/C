int printf(const char*,...);
#include<stdio.h>

void main()
{
  int row;
  printf("enter no of rows :");
  scanf("%d",&row);
  
  int j = 0;
  for(int i=0;i<=row;){
    if(j<(row-i)){
      printf("* ");
      j++;
      continue;
      }
    printf("\n");
    i++;
    j=0;
  }
  
}