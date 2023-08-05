#include<stdio.h>
void main()
{
  int row;
  printf("enter no of rows :\n");
  scanf("%d",&row);
  int j=0;
  int k =2;
  int num =2;
  for(int i=0;i<row;)
    {
      if(j<row)
      {
        int count =0;
        if(k<=num)
        {
          if(num%k==0)
          {
            count++;
          }
          /*if(count ==1)
          {
            printf("%d\t",num);
            j++;
          }*/
          k++;
          continue;
        }
        if(count ==1)
        {
            printf("%d\t",num);
            j++;
        }
        num++;
        continue; 
      }
      printf("\n");
      j=0;
      k=2;
      i++;
    }  
}
