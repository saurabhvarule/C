#include<stdio.h>
void main()
{
  int row;
  printf("enter no of rows :\n");
  scanf("%d",&row);
  if(row>0){
    for(int i=0;i<row;i++){
      int ch = 65 +i;
      for(int j =0; j<i; j++) {
        printf("\t");
      }
      for(int k =0; k<(row-i); k++) {
        printf("%c\t",ch);
        ch++;
      }
      printf("\n");
    }
    
  }else{
    printf("enter valid rows :\n");
  }
}