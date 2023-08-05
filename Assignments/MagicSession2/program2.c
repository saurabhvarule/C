#include<stdio.h>
void main()
{
  int size;
  printf("enter array size\n");
  scanf("%d",&size);
  int evenSum = 0;
  int oddSum = 0;

  if(size>0){
    int arr1[size];
    printf("enter elemts in array :\n");
    for(int i=0;i<size; i++) {
      scanf("%d",arr1 +i);
    }
    for(int i =0; i<size; i++){
      if(*(arr1 + i) % 2 == 0){
        evenSum += *(arr1 + i);
      }else{
        oddSum += *(arr1 + i);
      }
    }
    printf("Sum of even numbers is %d\n",evenSum);
    printf("Sum of odd numbers is %d\n",oddSum);
  }else{
    printf("size cant be 0\n");
  }
}