#include<stdio.h>
void main()
{
  int row;
  printf("enter no of rows :\n");
  scanf("%d",&row);

  int j =0;
  for(int i=0;i<row;) 
    {
      if(j<=i)
      {
        printf("* ");
        j++;
        continue;
      }
     // printf("%d",i);
      printf("\n");
      i++;
      j=0;
    }
}