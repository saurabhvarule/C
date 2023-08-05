#include<stdio.h>
void main()
{
  int row;
  printf("enter number of rows :\n");
  scanf("%d",&row);
  if(row>0){
    int j =0;
    for(int i =0;i<row;){
      int num = 2+i;
      if(j<=i){
        num+=j;
        printf("%d\t",num);
        j++;
        continue;
      }
      num-=1;
      printf("\n");
      j=0;
      i++;
    }
    
  }else{
    printf("enter valid rows");
  }
}