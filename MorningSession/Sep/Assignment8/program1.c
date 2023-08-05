#include<stdio.h>
void main()
{
  int row;
  printf("enter a number :\n");
  scanf("%d",&row);

  if(row>0){
    char ch =65;
    for(int i=0; i<row; i++){
      for(int j=0; j<i; j++) {
        printf("\t");
      }
      for(int k=0; k<(row-i); k++) {
        if(i%2==0) {
          if(k%2==0) {
            printf("%c\t",ch);
            }else{
            printf("%c\t",ch+32);
          }
          ch++;
        }else{
          if(k%2==0) {
            printf("%c\t",ch+32);
          }else{
            printf("%c\t",ch);
          }
          ch--;
        }
      }
      if(i%2==0){
        ch--;
      }else{
        ch++;
      }
      printf("\n");
    }
    
  }else{
    printf("enter valid no of rows !!\n");
  }
}
