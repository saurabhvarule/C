/*
5.WAP to take 1-D array from user and print the second largest
element of the array.
*/

#include<stdio.h>

// function for second largest element in an array ;
int secondLargest(int *ptr,int l) {
  int max1 =0;
  int max2 =0;
  for(int i=0; i<l; i++) {
    if(max1 < *(ptr+i)) {
      max2 = max1;
      max1 = *(ptr+i);
    }
  }
  return max2;
}
void main() {
  printf("enter the length of array\n");
  int l;
  scanf("%d",&l);
  int arr1[l];
  printf("enter the elements in array\n");
 
  for(int i=0; i<l; i++) {
    scanf("%d",&arr1[i]);
  }
  
  
  printf("Second largest element in an array is %d",secondLargest(arr1,l));
}