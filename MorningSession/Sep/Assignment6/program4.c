#include<stdio.h>
void main()
{
  int row;
  printf("enter no of rows :\n");
  scanf("%d",&row);
  if(row>0){
    for(int i=0;i<row;i++){
      if(i>=(row/2)){
          for(int j =0; j<(row-i); j++) {
              printf("%d\t",j+1);   
            }
      }else{
          for(int j =0; j<=i; j++) {
            printf("%d\t",j+1);
          }
        }
        printf("\n");      
      }
  }else{
    printf("enter valid rows :\n");
  }
}
