/*
1.WAP to create array of size n given by user and take values from
user and print array using pointer.
*/

#include<stdio.h>

void main() {
  printf("enter size of array:\n");
  int l;
  scanf("%d",&l);
  int arr1[l];
  printf("enter elements in array :\n");
  for(int i=0; i<l; i++) {
    scanf("%d",(arr1 + i));
  }

  int *ptr = &arr1[0];
  printf("array elements are :\n");
  for(int i=0; i<l; i++) {
    printf("%d\n",*(ptr+i));
  }
}