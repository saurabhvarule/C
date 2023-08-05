#include<stdio.h>
void main()
{
  int row;
  printf("enter no of rows :\n");
  scanf("%d",&row);
  if(row>0){
    for(int i =0; i<row; i++) {
      int num = row-(i+1);
      int ch = 64+row;
      for(int j =0; j<i; j++) {
        printf("\t");
      }
      for(int k =0; k<(row-i); k++) {
        if(i%2==0){
          if(k%2==0) {
            printf("%d\t",num);
            num--;
          }else{
            printf("%c\t",ch + 32);    
            ch--;
          }
        }else{
          if(k%2==0) {
            printf("%c\t",ch + 32);
            ch--;
          }else{
            printf("%d\t",num);
            num--;
          }          
        }            
      }
      printf("\n");      
    }
    
  }else{
    printf("enter valid rows :\n");
  }
}