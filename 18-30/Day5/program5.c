/*
5.)WAP to take a size, character array element from user in retArr() function and return
array to the main function, print the all array element in main function.
*/
/*
#include<stdio.h>

char *cptr;
char* retArr() {
  int l;
  printf("enter number of elements:\n");
  scanf("%d",&l);
  
  char arr[l];
  printf("enter charcters :\n");
  for(int i=0; i<l; i++) {
    scanf("%c",&arr[i]);
  }
  cptr = arr;
  return cptr;
}
void main() {
  
  char *ptr = retArr();
  for(int i=0; i<10; i++) {
   printf("%c\n",*(ptr +i)); 
  }
}
*/