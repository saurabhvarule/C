#include<stdio.h>
void main()
{
  char ch1 = 'A';
  char ch2 = 'B';

  char *ptr1 = &ch1;
  char *ptr2 = &ch2;

  printf("%p\n",ptr1);
  printf("%p\n",ptr2);
  
  int temp = (*ptr1 - * ptr2 ) + 2;
  printf("%d\n",temp);
  printf("%p\n",ptr1 + 5);
  printf("%c\n",*ptr1);
  
}