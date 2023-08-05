#include<stdio.h>
void main() 
{
  int row;
  printf("enter no of rows :\n");
  scanf("%d",&row);

  if(row>0) {
    for(int i = 0; i<row; i++) {    
      int ch = 64 + ((2*i) + 1);
      if(i<=row/2) {
        for(int j =0 ; j<(2*i) +1; j++) {
          printf("%c\t",ch);
          ch--;
        }
      }else{
        for(int j = 0; j-(row-i); j++) {
          printf("%c\t",ch);
          ch--;        
        }
      }
      printf("\n"); 
    }    
  }else{
    printf("enter valid rows \n");
  }
}