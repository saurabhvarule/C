#include<stdio.h>
void main()
{
  int row;
  printf("enter number of rows :\n");
  scanf("%d",&row);
  int j=0;
  if(row>0){
    int num =1;
    for(int i=0;i<row;){      
      if(j<=i){
        printf("%d\t",num);
        num++;
        j++;
        continue;
      }
      num-=1;
      printf("\n");
      j=0;
      i++;
    }    
  }else{
    printf("enter valid rows\n");
  }
}