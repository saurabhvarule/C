#include<stdio.h>
void main() 
{
  int row;
  printf("enter no of rows :\n");
  scanf("%d",&row);
  if(row>0){
    int j = 0;
    int k =0;
    int num =1;
    for(int i = 0; i<row;) {
      int ch = 65;
      if(j<i) {
        printf("\t");
        j++;
        continue;
      }
      if(k<row-i){
        if(k%2==0) {
          
          printf("%d\t",num);
          num++;
        }else{
          ch += k;
          printf("%c\t",ch+32);
        }
        k++;
        continue;
      }
    printf("\n");
    j = 0;
    k = 0;
    num = 1;  
    i++;
    }
  }else{
    printf("enter vlaid no of rows :\n");
  }
}