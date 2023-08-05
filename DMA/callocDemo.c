//calloc used for contionues memory  allocation(sequential data) :
//also used realloc

#include<stdio.h>
#include<stdlib.h>

void main() {
  int *num = (int*) malloc(sizeof(int));
  printf("enter no of elements:\n");
  scanf("%d",num);
  int *ptr1 = (int*)calloc(*num,sizeof(int));

  printf("enter elements:\n");
  for(int i=0; i<*num; i++) {
    scanf("%d",ptr1+i);
  }

  printf("array elements are :\n");
  for(int i=0; i<*num; i++) {
    printf("%d\n",*(ptr1+i));
  }
  
  //realloc() -->>
  int *ptr2 = (int*)realloc(ptr1,sizeof(int));
  
  //printf("%ld\n",sizeof(ptr2));
  for(int i=0 ; i<*num; i++) {
    printf("%d\n",*(ptr2+i));
  }
  
}