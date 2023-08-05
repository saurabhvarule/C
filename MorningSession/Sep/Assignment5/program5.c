#include<stdio.h>
void main()
{
  int num;
  printf("enter no of rows :\n");
  scanf("%d",&num);
  int row = (num*2)-1;
  if(row>0){  
    for(int i =0; i<row; i++) {
      int ch = 97;
      if(i>=num){
        for(int k=0; k<(row-i); k++){
          printf("%c\t",ch);
          ch++;
        }
        printf("\n");
      }else{
        for(int k =0; k<=i; k++) {
          printf("%c\t",ch);
          ch++;
        }
        printf("\n");
      }      
    }
  }
  else{
    printf("enter valid rows :\n");
  }
}