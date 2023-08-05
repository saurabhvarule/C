#include<stdio.h>

int *ptr = NULL;
int enterArray() {
  printf("Enter array size :\n");
  int arrSize;
  scanf("%d",&arrSize);
  int arr[arrSize];
  printf("enter array elements :\n");
  for(int i=0;i<arrSize;i++){
    scanf("%d",&arr[i]);
  }
  ptr = arr;
  return arrSize;
}
void main() {
  int arrSize = enterArray();
  for(int i =0; i< arrSize; i++) {
    printf("%d\n",*(ptr + i));
  }
}