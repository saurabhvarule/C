#include<stdio.h>
void main()
{
  int num;
  printf("enter number to check composite or not? \n");
  scanf("%d",&num);
  int flag = 0;
  for(int i=2;i<=(num/2); i++){
    if(num%i==0){
      printf("%d is a composite number \n",num);
      flag=1;
      break;
    }
  }
  if(flag==0){
    printf("%d is not a composite number\n",num);
  }
}