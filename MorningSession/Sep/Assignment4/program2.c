#include<stdio.h>
void main() {
  int row;
  printf("enter no of rows :\n");
  scanf("%d",&row);
  if(row>0){
    for(int i =0; i<row; i++) {
      int num = row*(i+1);
      for(int j = 0; j<row; j++) {
        printf("%d\t",num);
        num +=(row+(i+3));
      }
      printf("\n");
    }
    
  }else{
    printf("enter valid no of rows \n");
  }
}