#include<stdio.h>
void main() {


  int row;
  char ch = 'A';
  int num =1;
  printf("enter no of rows :\n");
  scanf("%d",&row);

  int flag = 0;

  for(int i = 0; i < row; i++) {
    for(int j=row; j>i; j--){
      if(flag == 0) {
        printf("%d ",num);
        num++;
        flag =1;
      }else{
        printf("%c ",ch);
        ch++;
        flag = 0;
      }
    }
    printf("\n");
  }
  
}