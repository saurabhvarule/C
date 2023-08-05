#include<stdio.h>
void main()
{
  int row;
  printf("enter no of rows :\n");
  scanf("%d",&row);
  int num = 1;
  for(int i =0; i<row; i++) {
    for(int j =0; j<row;) {
      int dup = num;
      int sum = 0;
      while(dup>0) {
        sum += dup % 10;
        dup /= 10;
      }
      if(num % sum == 0){
        printf("%d\t",num);
        j++;
      }
      num++;
    }
    printf("\n");
  }
}