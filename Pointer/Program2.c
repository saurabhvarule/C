//int printf(const char*,...);
#include<stdio.h>
int x =10;
char ch = 'A';
void main() 
{
  float f =20.5;
  double d = 33.555;
  char *name = "Saurabh";

  int *ptr1 = &x;
  float *ptr2 = &f;
  char *ptr3 = &ch;
  char **ptr5 =&name;
  double *ptr4 = &d;

  printf("%p\n",ptr1);
  printf("%p\n",ptr2);
  printf("%p\n",ptr3);
  printf("%p\n",ptr4);
  printf("%p\n",ptr5);
  

  printf("%d\n",*ptr1);
  printf("%f\n",*ptr2);
  printf("%c\n",*ptr3);
  printf("%lf\n",*ptr4);
  printf("%s\n",*ptr5);

  printf("size of string name is : ");

  printf("%ld\n",sizeof(name));
}