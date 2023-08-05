#include<stdio.h>
void main()
{
  int x =10;
  char ch = 'A';
  float f = 15.5f;
  void *iptr = &x;
  void *cptr = &ch;
  void *fptr = &f;
  printf("%d\n",*(int*)iptr);
  printf("%c\n",*(char*)cptr);
  printf("%f\n",*(float*)fptr);
}