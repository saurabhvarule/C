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
      int ch =65;
      if(j<=i){
        ch +=j;
        if(i%2==0){
          printf("%c\t",ch+32);
        }else{
          printf("%c\t",ch);
        }
        ch++;
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