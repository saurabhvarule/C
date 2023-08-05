#include<stdio.h>
void main()
{
  int row;
  printf("enter no of rows :\n");
  scanf("%d",&row);
  if(row>0){
    int a = 0;
    int b = 1;
    int sum = 0;
    for(int i=0;i<row;i++){
      for(int j =0; j<(row-i); j++) {
        printf("%d\t",sum);
        a = b;
        b = sum;
        sum = a + b;
      }
      printf("\n");
    }
    
  }else{
    printf("enter valid rows :\n");
  }
}