#include<stdio.h>
void main() 
{
  int row;
  printf("enter no of rows :\n");
  scanf("%d",&row);

  if(row>0) {
    int j =0;
    int k =0;    
    int ch = 65;
    int num = 0;
    for(int i =0; i<row;) {
      if(j<i) {
       printf("\t");
       j++;
       continue;
     }
      if(k<row-i){
        if(num%2==0) {
          printf("%c\t",ch);
        }else{
          printf("%c\t",ch+32);
        }
        ch++;
        k++;
        num++;
        continue;
      }
      ch--;
      printf("\n");
      k = 0;
      j = 0;
      i++;
   } 
  }else{
    printf("enter valid rows \n");
  }
}