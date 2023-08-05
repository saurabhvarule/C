#include<stdio.h>
void main()
{
  int size;
  printf("enter array size \n");
  scanf("%d",&size);
  int arr1[size];
  int arr2[size];
  if(size>0){
    
    for(int i =0; i<size; i++) {
      printf("enter elements in array 1:\n");
      scanf("%d",arr1 +i);    
    }
     for(int i =0; i<size; i++) {
      printf("enter elements in array 2:\n");
      scanf("%d",arr2 +i);    
    }
    int sum =0;
    for(int i =0; i<size;i++){
      sum += *(arr1 +i) + *(arr2 + i);
    }
    printf("The sum of array 1 and 2 is %d \n",sum);
    
  }else{
    printf("size cant be 0 \n enter array size greater than 0!!\n");
  }
  
}