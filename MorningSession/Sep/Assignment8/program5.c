#include<stdio.h>
void main()
{
  int row;
  printf("enter a number :\n");
  scanf("%d",&row);

  if(row>0){
    for(int i=0; i<row; i++){
      if(i>(row/2)){
        char ch = 64+(2*(row-i)-1);
        for(int j=0; j<row-i; j++) {
          printf("%c\t",ch);
          ch--;
        }
        printf("\n");
      }else{
        char ch = 65 + 2*i;
        for(int j =0; j<=(2*i); j++) {
          printf("%c\t",ch);
          ch--;
        }
        printf("\n");
      }
      
    }
    
  }else{
    printf("enter valid no of rows !!\n");
  }
}