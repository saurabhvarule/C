#include<stdio.h>
void main() {
  int row;
  printf("enter no of rows :\n");
  scanf("%d",&row);
  if(row>0){
    for(int i =0; i<row; i++) {
      int num = row-(i+1);
      int ch = 65 +i;
      for(int j = 0; j<row-i; j++) {
        if(i%2==0){
          if(j%2==0){
            printf("%d\t",num);
            num--;
          }else{
            printf("%c\t",ch+32);
          }
          ch++;
        }else{
          if(j%2==0){
            printf("%c\t",ch +32);
            
          }else{
            printf("%d\t",num);
            num--;
            
          }
          ch++;
        }
        
    
      }
      printf("\n");
    }
    
  }else{
    printf("enter valid no of rows \n");
  }
}