#include<stdio.h>
void main()
{
  int row;
  printf("enter a number :\n");
  scanf("%d",&row);

  if(row>0){
    for(int i=0; i<row; i++){
      char ch = 64 + row;
      for(int j=0; j<(row-i)+1; j++) {
        printf("\t");
      }
      for(int k=0; k<=i; k++) {
        if(i%2==0) {
          if(k%2==0) {
            printf("%c\t",ch);
            }else{
            printf("%c\t",ch+32);
          }
          ch--;
        }else{
          if(k%2==0) {
            printf("%c\t",ch+32);
          }else{
            printf("%c\t",ch);
          }
          ch++;
        }
      }
      printf("\n");
    }
    
  }else{
    printf("enter valid no of rows !!\n");
  }
}