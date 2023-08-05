#include<stdio.h>
void main() 
{
  char carr1[3] = {'A','B','C'};
  char carr2[3] = {'D','E','F'};
  
  char (*cptr1)[3] = &carr1;
  char (*cptr2)[3] = &carr2;
 
  printf("%c \n",**cptr1);
  printf("%c \n",**cptr2);
  char (*cpt[2])[3] = {cptr1,cptr2};
  
  for(int i =0; i<6; i++) {
    printf("%c\t",*(*cpt[0]) +i);
  }
}
