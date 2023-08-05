#include<stdio.h>
void main()
{
  int row;
  printf("enter no of rows :\n");
  scanf("%d",&row);
  if(row>0){
    for(int i =0; i<row; i++) {
      int num = row;
      int ch =64 + row;
      for(int j =0; j<=i; j++) {
        if(j%2== 0) {
          printf("%d\t",num);
          num--;
        }else{
          printf("%c\t",ch+32);          
        }
        ch--;        
      }
      printf("\n");
    }
  }else{
    printf("enter valid rows :\n");
  }
}