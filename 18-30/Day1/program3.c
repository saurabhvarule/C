/*
3 WAP to create 3-D array of size given by user and print the sum of
all left diagonal elements.
*/

#include<stdio.h>

void main() {
  printf("enter the size of rows: \n");
  int r ;
  scanf("%d",&r);

  printf("enter the size of columns: \n");
  int c;
  scanf("%d",&c);

  int arr1[2][r][c];
  printf("enter array elements: \n");
  for(int i=0;i<2*r*c; i++) {
    scanf("%d",(*(*arr1))+i);
  }

  int sum = 0;
  for(int i=0;i<2; i++) {
    for(int j=0; j<r; j++) {
      for(int k=0; k<c; k++) {
        if(j==k) {
          sum += arr1[i][j][k];
        }
      }
    }
  }
  printf("the sum of all left diagonal elements are : %d\n",sum);
}