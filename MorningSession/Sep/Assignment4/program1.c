
#include<stdio.h>
void main()
{
  int row;
  printf("enter number of rows :\n");
  scanf("%d",&row);
  //int j =0;
  if(row>0) {
    /*for(int i =0;i<row;){
      int num = row*(i+1);
      if(j<row){
        num+=j;
        printf("%d\t",num);
      
        j++;
        continue;
      }
      printf("\n");
      j = 0;
      i++;
    }*/
  for(int i = 0; i<row; i++) {
    int num = row*(i+1);
    for(int j = 0; j<row; j++) {
      printf("%d\t",num);
      num += i+1;
    }
    printf("\n");
  }
    
  }else{
    printf("enter valid number of rows :\n");
  }
}

  
