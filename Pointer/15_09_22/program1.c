#include<stdio.h>
void main() 
{
  int arr[] ={10,20,30,40,50};

  int* ptr1 = &arr[0];

  printf("%p\n",&arr[0]);
  printf("%p\n",ptr1);
  printf("%d\n",*ptr1);

  printf("%d\n",*(ptr1+1));
  printf("%d\n",*(ptr1+2));
  printf("%d\n",*(ptr1+3));
 // printf("%d\n",*(ptr1+4));

  /* addition of pointer and integer is as follwing :
  lets assume that address of ptr1 s 100
        arr
          |
    _____________________________________________
    |                                            |
    | 10   20  30  40  50                        |
    |  |    |    |   |   |                       |           | 100  104  108 112 116                      |
    |                                            |
    |                                            |
    ______________________________________________
    ptr1 + 1 * size of(data type of a pointer)
                      |
    100 + 1 * 4 = 104 value at 104 is 20
    100 + 2 * 4 = 108 value at 108 is 30
    100 + 3 * 4 = 112 vale at 112 is 40
    100 + 4 * 4 = 116 value at 116 is 50

    */
    
  
}