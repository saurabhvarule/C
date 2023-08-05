#include<stdio.h>
void main() 
{
  int row;
  printf("enter no of rows :\n");
  scanf("%d",&row);

  int j =0;
  int k=0;
  for(int i=0;i<row;){

    if(k<row-(i+1))
    {
      printf("_ ");
      k++;
      continue;
    }
    if(j<=i)
    {
      printf("%d ",(j+i));
      j++;
      continue;
      
    }
    printf("\n");
    i++;
    j=0;
    k=0;
  }
}