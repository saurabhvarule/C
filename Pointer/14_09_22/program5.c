#include<stdio.h>

void main() 
{
  char ch1 = 'x';
  char ch2 = 'y';
  char ch3 = 'z';

  char *ptr1 = &ch1;
  printf("%d\n",*ptr1);
  printf("%d\n",*ptr1 +1);
  printf("%d\n",*ptr1 +2);
  
  printf("%c\n",*ptr1);
  printf("%c\n",*ptr1+1);
  printf("%c\n",*ptr1+2);

  
  
  /*lets assume adress of ch1 is 100 and memory of char is 1 byte so ch1 holds 1 byte and so on of ch2 and ch3.addition is done like
  |
  100(ch1) + 1 * size of(data type of pointer which is char)
  |
so it will be
|
100 + 1 * 1  and 100 + 2 *1
  |                  |
101                 102
  |                   |
value at 101        value at 102
  |                    |
  y                    z
*/


}