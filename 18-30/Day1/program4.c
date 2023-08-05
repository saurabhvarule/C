/*
4.WAP to compare two arrays by with length and elements given by
user if array are equal then print “Equal” otherwise print “Not
Equal”.
  */
#include<stdio.h>
void main() {
  int l1,l2;
  printf("enter the length of array 1:\n");
  scanf("%d",&l1);
  printf("enter the length of array 2:\n");
  scanf("%d",&l2);

  int arr1[l1];
  int arr2[l2];
  printf("enter the elements in array 1:\n");
  for(int i=0; i<l1; i++) {
    scanf("%d",&arr1[i]);
  } 
  printf("enter the elements in array 2:\n");
  for(int i=0; i<l2; i++) {
    scanf("%d",&arr2[i]);
  }

  int diff = 1;
  if(l1 != l2) {
    printf("Not Equal\n");
  }else {
    int count = 0;
    for(int i=0; i<l1; i++) {
      if(arr1[i] == arr2[i]) {
        count++;
      }
    }if(count == l1) {
      printf("Equal\n");
    }else {
      printf("Not equal\n");
    }
  } 
}