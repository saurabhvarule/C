#include<stdio.h>
void main(){
  int arr[5];
  printf("enter array elements:\n");

  for(int i =0; i<5; i++) {
    scanf("%d",arr + i);
  }

  int max = 0;
  int max2 = 0;
  for(int i=0; i<5; i++) {
    if(max < *(arr +i)){
      max2 = max;
      max = *(arr +i);
    }
  }
  printf("second largest element in array is %d .\n",max2);
}