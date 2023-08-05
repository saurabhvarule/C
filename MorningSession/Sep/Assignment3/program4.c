#include<stdio.h>
void main()
{
  int row;
  printf("enter number of rows :\n");
  scanf("%d",&row);
  int num = 2;
  if(row>0){
    for(int i =0;i<row; i++){
      for(int j =0; j<row;){
        int count = 0;
        for(int k =2; k<=num; k++) {
          if(num%k==0) {
            count++;
          }
        }
        if(count==1){
          printf("%d\t",num);
          j++;
        }
        num++;       
      }
      printf("\n");
    }

  }else{
    printf("enter valid rows\n");
  }
}