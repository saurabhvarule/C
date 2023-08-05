                          
#include<stdio.h>            
void main()            
{                    
  int row;                                            
  printf("enter no of rows :\n");
  scanf("%d",&row);
  if(row>0){
    int num=1;
    int j =0;
    for(int i =0;i<row;)
      {
        if(j<=i){
          printf("%d\t",num);
          num+=2;
          j++;
          continue;
        }
        printf("\n");
        j=0;
        i++;
      }    
  }else{
    printf("enter a valid number of rows \n");
  }
}