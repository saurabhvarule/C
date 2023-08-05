#include<stdio.h>
void main() 
{
  int row;
  printf("enter no of rows :\n");
  scanf("%d",&row);

  if(row>0) {
    int j =0;
    int k =0;
    for(int i = 0; i<row; i++) {
      int ch = 64 + row;
      for(int j = 0; j<row-(i+1); j++) {
        printf("\t");
      }
      for(int k =0; k<=i; k++) {
        if(k%2==0) {
          printf("%c\t",ch);
        }else{
          printf("%c\t",ch+32);
        }
        ch--;
        
      }
      printf("\n"); 
    }    
  }else{
    printf("enter valid rows \n");
  }
}