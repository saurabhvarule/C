/*
2.WAP to create 2-D array of size given from user and assign that 

array to another array of same size and print the second array.
*/

#include<stdio.h>
void main() {
  printf("enter no of rows : \n");
  int r;
  scanf("%d",&r);
  
  printf("enter length of columns:\n");
  int c;
  scanf("%d",&c);
  int arr1[r][c];
  //array elements from user using single loop;
  printf("enter array elements :\n");
  for(int i=0; i<r*c; i++) {
    scanf("%d",((*arr1) +i));
  }
  
  int arr2[r][c];
  // assigning arr1 values to arr2 using single loop;
  for(int i=0 ; i<r*c; i++) {
    *((*arr2) +i) = *((*arr1) +i);
  }

  // printing 2D array using nested loop;
  for(int i=0; i<r; i++) {
    for(int j=0; j<r; j++) {
      printf("%d\t",*(*(arr2 +i) + j));
    }
    printf("\n");
  }
}
















