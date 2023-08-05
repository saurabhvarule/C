#include<stdio.h>
void main()
{
  int row;
  printf("enter no of rows :\n");
  scanf("%d",&row);
  if(row>0){
    for(int i=0;i<row;i++){
      int ch = 96+(row-i);
      
      for(int j =0; j<(row-i); j++) {
        printf("\t");
      }
      
      for(int k =0; k<=i; k++) {
        if(i%2==0) {
          if(k%2==0) {
            printf("%c\t",ch);        
          }else{
            printf("%c\t",ch-32);
          }
        }else{
          if(k%2==0) {
            printf("%c\t",ch-32);
          }else{
            printf("%c\t",ch);
          }
        }
        ch++;
      }
      printf("\n");
      
    }
    
  }else{
    printf("enter valid rows :\n");
  }
}