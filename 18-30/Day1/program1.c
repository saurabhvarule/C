/*
1.WAP to create 1-D array of length n from user and also take value 
from user and print whole 1-D array.
*/
#include<stdio.h>

void main() {
  int l;
  printf("enter length of an array :\n");
  scanf("%d",&l);
  int arr[l]; 
  printf("enter array elements :\n");
  for(int i=0; i<l; i++) {
    scanf("%d",(arr + i));
  }
  printf("array elements are : \n");
  for(int i=0; i<l; i++) {
    printf("%d\t",*(arr + i));
  }
}
