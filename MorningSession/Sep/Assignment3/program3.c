#include<stdio.h>
void main()
{
  int row;
  printf("enter number of rows :\n");
  scanf("%d",&row);
  int ch=65;
  if(row>0){
    int j =0;
    for(int i =0;i<row;){
      if(j<=i){
        if(j%2==0){
          printf("%c\t",ch+32);
        }else{
          printf("%c\t",ch);
        }
        j++;
        continue;
      }
      ch++;
      printf("\n");
      j=0;
      i++;
    }
    
    
  }else{
    printf("enter valid rows\n");
  }
}