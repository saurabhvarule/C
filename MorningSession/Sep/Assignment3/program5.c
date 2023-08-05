#include<stdio.h>
void main()
{
  int row;
  printf("enter number of rows :\n");
  scanf("%d",&row);
  int num = 1;
  if(row>0){
    int j =0;
    for(int i =0;i<row;) {

      if(j<row) {
        printf("%d\t",num);
        num +=3;
        j++;
        continue;
      }
      printf("\n");
      num-=(3*2);
      j = 0;
      i++;
    }   
  }else{
    printf("enter valid rows\n");
  }
}