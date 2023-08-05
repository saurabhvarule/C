#include<stdio.h>
void main()
{
  int x =10;
  int arr[] = {10,20,30,40,50};
  int *ptr1 = &x;
  int *ptr2 = &arr[0];
  printf("%d\n",*(ptr1) +1);  //11
  printf("%d\n",*(ptr1));  //12
  printf("%d\n",*ptr2);
  printf("%d\n",*ptr2++);
  printf("%d\n",*ptr2++);
  printf("%d\n",*ptr2++);
  printf("%d\n",*ptr2);
}