#include<stdio.h>
#include<string.h>
  //my implementation of strcpy(char *str,const char * dest)
char *mystrcpy(char *dest,char *src) {
  while(*src != '\0') {
    *dest = *src;
    src++;
    dest++;
  }
  *dest = '\0';  //-->>cause it should be ending with '\0';
  return dest;
}
void main() {
  char str1[20];
  gets(str1);
  puts(str1);
  char str2[20];
  //strcpy(str2,str1);
  puts(str2);
  mystrcpy(str2,str1);
  printf("str1 = %s\n",str1);
  printf("str2 = %s\n",str2);
  
  
}