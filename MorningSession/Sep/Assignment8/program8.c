//  Frequency of a dugit in number :
#include<stdio.h>
void main()
{
  int arr[] = {0,0,0,0,0,0,0,0,0,0};
  long int num;
  printf("enter a number :\n");
  scanf("%ld",&num);
  int arrSize = (sizeof(arr))/(sizeof(int));

  long int dup = num;
  while(dup > 0) {
    int temp = dup % 10;
    (*(arr + temp))++;
    dup/=10;
  }
  for(int i =0; i<arrSize; i++) {
    if(*(arr + i) > 0) {
      printf("Frequency of %d is = %d\n",i,*(arr + i));
    }
  }
}