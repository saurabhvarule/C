/*
1.)WAP to take size, integer array element from user in main function and print all even
element in evenArr() function(passing Array to function). 
*/

#include<stdio.h>
void evenArr(int* ptr,int l) {
  printf("Even elements in an array are :\n");
  for(int i=0; i<l; i++) {
    if(*(ptr+i) %2 ==0) {
      printf("%d\n",*(ptr + i));
    }
  }
}

void main() {
  int l;
  printf("enter no of elements:\n");
  scanf("%d",&l);
  int arr1[l];

  printf("enter elements in array:\n");
  for(int i=0; i<l; i++) {
    scanf("%d",&arr1[i]);
  }

  evenArr(arr1,l);
}