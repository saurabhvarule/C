//    Dereferencing of a pointer :

#include<stdio.h>
int x = 10;
char ch ='A';

void main()
{
  float f = 10.5f;
  double d = 33.333;

  int *ptr1 = &x;
  char *ptr2 = &ch;
  float *ptr3 = &f;
  double *ptr4 = &d;

  printf("%d\n",*ptr1);
  printf("%c\n",*ptr2);
  printf("%f\n",*ptr3);
  printf("%lf\n",*ptr4);

  printf("%p\n",ptr1);
  printf("%p\n",ptr2);
  printf("%p\n",ptr3);
  printf("%p\n",ptr4);
  

}