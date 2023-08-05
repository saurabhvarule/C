#include<stdio.h>

void main() 
{
  int row;
  printf("enter no rows :\n");
  scanf("%d",&row);
  int num1 = 0;
  for(int i =0;i<row;i++){
    int num2 = row + i;
    for(int j =0; j< row; j++) {
      if(i%2==0) {
        if(j %2 ==0) {
          printf("%c\t",64 + (num2));
          
        }else{
          printf("%c\t",96+(num2));
        }
        num2--;
      }else{
        if(j%2==0) {
          printf("%c\t",96 + (num1+j));
          
        }else{
          printf("%c\t",64 + (num1+j));
          }
      }
      
    }
    if(i%2==0){
      num1++;
    }
    printf("\n");
  }
}