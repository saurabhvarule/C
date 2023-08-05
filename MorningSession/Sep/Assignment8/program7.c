#include<stdio.h>
void main()
{
  int num;
  printf("Enter a number :\n");
  scanf("%d",&num);
  int power = 0;
  int dup1 = num;
  while(dup1>0) {
    power++;
    dup1/=10;
  }
  printf("%d\n",power);
  int dup2 = num;
  int sum = 0;
  while(dup2>0) {
    int cube = 1;
    int temp = dup2 % 10;
    for(int i=0; i<power; i++) {
      cube *= temp;
    }
    sum+=cube;
    dup2/=10;
  }
  if(sum == num) {
    printf("%d is a ARMSTRONG Number .\n",num);
    }else{
      printf("%d is a NOT A ARMSTRONG Number .\n",num);
  }
}