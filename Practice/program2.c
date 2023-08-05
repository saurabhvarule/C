#include<stdio.h>
void main() {

  int row;
  printf("enter no of rows :");
  scanf("%d",&row);
  int flag = 0;

  for(int i=0; i<row; i++) {
    for(int j = 0; j<i; j++){
      printf("  ");
    }
    for(int k =0; k<(2*row)-(2*i+1); k++) {
      printf("%d ",k);
      }
    printf("\n");
    }
  }
