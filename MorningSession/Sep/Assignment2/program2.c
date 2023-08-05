#include<stdio.h>
void main()
{
  int row;
  printf("enter no rows :\n");
  scanf("%d",&row);
  if(row>0){
    int num = row*row *(2);
    int j = 0;
    for(int i =0; i<row;){
      if(j<row){
        printf("%d\t",num);
        num-=2;
        j++;
        continue;
        
      }
      printf("\n");
      j=0;
      i++;
        
    }
    
  }else{
    printf("enter a valid number of rows \n");
  }
}