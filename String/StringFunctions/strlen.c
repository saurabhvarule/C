#include<stdio.h>
#include<string.h>
/*
  void main() {
  char str1[20];
  gets(str1);
  puts(str1);
  printf("length of str1 is %ld\n",strlen(str1));
  printf("sizeof of str1 is %ld\n",sizeof(str1));
}

*/

// my implementation of strlen() :
long int mystrlen(char *src) {
  long int len= 0;
  while(*src != '\0') {
    len++;
    src++;
  }
  return len;
}
void main() {
  char str1[20];
  gets(str1);
  puts(str1);
  printf("%d\n",mystrlen(str1));
  
}