#include<stdio.h>
void main() 
{
  char ch = 'A';

  char *ptr1 = &ch;
  //printf("%c\n",(ptr1 + 'A'));   //guarbage value but it could be a segmentation falut if data is different like int float it gives guarbage value because char holds 1 byte and is possible that that address is within the process,if the address is out of process thats where segmentation fault will occured. 
}