#include<stdio.h>
void main()
{
  int size;
  printf("enter array size :\n");
  scanf("%d",&size);
  if(size == 0) {
    printf("size cant be 0 \n");
  }else{
  
  int arr[size];
  printf("enter elements in array :\n");
  for(int i=0; i<size; i++) {
    scanf("%d",arr +i);
  }
  int search;
  int flag = 0;
  printf("enter no to search in array :\n");
  scanf("%d",&search);
  for(int i =0; i<size; i++) {
    if(search == *(arr + i)) {
      flag =1;
      printf("Present\n");
      break;
    }
  }
  if(flag==0){
    printf("not present\n");
  }
    }
}