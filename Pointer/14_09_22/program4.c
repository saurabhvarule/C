#include<stdio.h>

void main() 
{
  int x = 10;
  int y =20;

  int *ptr1 = &x;
  int *ptr2 =&y;

  printf("%p\n",ptr1);
  printf("%p\n",ptr2);

  printf("%d\n",*ptr1);
  printf("%d\n",*(ptr1 +1));  //-->> addition of two pointers is not allowed but addition of pointer and an integer is allowed thats why it will give output 20 is of var y

  /*  the addition will happen like:
      ptr1 + 1 * data type of pointer 
       |         |
     100 + 1 * 4
     |
     104
      |
      which is value at 104 and it is 20./

    */
}