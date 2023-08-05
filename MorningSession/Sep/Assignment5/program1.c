#include<stdio.h>
void main()
{
  int row;
  printf("enter no of rows :\n");
  scanf("%d",&row);
  if(row>0){
    int j =0;
    int k =0;
    for(int i=0;i<row;){
      int ch = 65;
      if(j<i) {
        printf("\t");
        j++;
        continue;
      }
      if(k<(row-i)){
        ch+=k;
        printf("%c\t",ch);
        k++;
        continue;
      }
      printf("\n");
      k = 0;
      j = 0;
      i++;
      
    } 
  }else{
    printf("enter valid rows :\n");
    
  }
}