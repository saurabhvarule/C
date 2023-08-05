#include<stdio.h>
void main()
{
  int row;
  printf("enter a number :\n");
  scanf("%d",&row);

  if(row>0){
    for(int i=row; i>0; i--){
      for(int j=row; j>i; j--) {
        printf("\t\t");
      }
      for(int k=(2*i)-1; k>0; k--) {
        printf("%d\t",k);        
      }
      printf("\n");
    }
    
  }else{
    printf("enter valid no of rows !!\n");
  }
}