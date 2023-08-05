#include<stdio.h>
void main()
{
  int arr[] ={10,20,30,40,50};
  int *ptr1 = &arr[0];
  int *ptr2 = &arr[4];
  for(int i =0;i<(sizeof(arr)/sizeof(arr[0]));i++) {
    printf("%d\n",*(ptr1 +i));
  }

  //now here comes the point we know that addition of pointers is not allowed but substraction is possible heres the example
  printf("%d\n",ptr1-ptr2);
  printf("%d\n",(ptr2-ptr1));
  
  
}
