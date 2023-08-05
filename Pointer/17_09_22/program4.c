#include<stdio.h>
void main()
{
  int arr[] = {10,20,30,40,50};
  int *ptr1 = &arr[0];
  ptr1++;
  *ptr1 = 70;
  int length = sizeof(arr)/sizeof(arr[0]);
  for (int i =0; i<length; i++)
    {
      printf("%d\t",arr[i]);
    }
}