#include<stdio.h>
void main() 
{
  int row;
  printf("enter no of rows :\n");
  scanf("%d",&row);

  if(row>0) {
    for(int i = 0; i<row; i++) {    
      for(int j = 0; j<row-(i+1); j++) {
        printf("\t");
      }
      for(int k = 0; k< (2*i) +1; k++) {
        printf("%d\t",k+1); 
      }
      printf("\n"); 
    }    
  }else{
    printf("enter valid rows \n");
  }
}