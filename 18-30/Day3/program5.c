/*
5.WAP to create array of size n given by user and take the value from
user sort the array in ascending order and print the sorted array.
*/
#include<stdio.h> 
void main() {
  int l;
  printf("enter no of elements:\n");
  scanf("%d",&l);
  int arr1[l];
  printf("enter elements:\n");
  for(int i=0; i<l; i++) {
    scanf("%d",&arr1[i]);
  }
  
  printf("array elements are:\n");
  for(int i=0; i<l; i++) {
    printf("%d\n",arr1[i]);
  }

  int i=0;
  int j;  
  while(i<l) {
    j = i+1;
    while(j<l) {
      if(arr1[i]>arr1[j]) {
        arr1[i] = arr1[i] + arr1[j];
        arr1[j] = arr1[i]-arr1[j];
        arr1[i] = arr1[i]-arr1[j];
      }
      j++;
    }
    i++;
    } 

  printf("sorted array :\n");
  for(int i=0; i<l; i++) {
    printf("%d\n",arr1[i]);
  }
}