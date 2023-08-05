#include<stdio.h>
void main()
{
  int row;
  printf("enter no of rows :\n");
  scanf("%d",&row);
  if(row>0){
    for(int i=0;i<row;i++){
      int num =1;
      for(int j =0; j<(row-(i+1)); j++) {
        printf("\t");
      }
      
      for(int k =0; k<(2*i)+1; k++) {
        if(k%2==0){  
          printf("%d\t",num);
          num++;
          }else{
            printf("\t");  
        }        
      }
      printf("\n");
    }
    
  }else{
    printf("enter valid rows :\n");
  }
}