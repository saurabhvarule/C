#include<stdio.h>
void main()
{
  int arr[10];
  int num;
  printf("enter a number :\n");
  scanf("%d",&num);
  for(int i = 0; i<10; i++) {
    *(arr + i) = i +1;
    printf("%d\t",*(arr + i)*num);
  }
}