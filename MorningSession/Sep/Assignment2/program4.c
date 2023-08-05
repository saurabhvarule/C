#include<stdio.h>
void main()
{
  int row;
  printf("enter no of rows :\n");
  scanf("%d",&row);
  if(row>0){
    int j =0;
    //int ch =65;
    for(int i =0; i<row;){ 
      int ch =64 + (row-i);
      if(j<(row-i)){
        ch-=j;
        if(i%2==0){
          printf("%c\t",ch);
          ch--;
        }else{
          printf("%c\t",ch+32);
        }
        ch--;
        j++;
        continue;
      }
      printf("\n");
      j=0;
      i++;
    }
  }else{
    printf("entyer a valid number of row \n");
  }
}