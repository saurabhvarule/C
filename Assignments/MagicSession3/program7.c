#include<stdio.h>
void main()
{
  int arr[][3] = {1,2,3,4,5,6,7,8,9};
  printf("%p\n",&arr);        //100-->>whole array
  printf("%p\n",arr);         //100-->>row
  printf("%p\n",*(arr + 0));  //100
  printf("%p\n",*(arr + 3));  //136
  printf("%p\n",*(arr + 5));  //160
  
  
}