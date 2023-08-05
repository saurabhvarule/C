/*
5.Write the user defined functions of mystrlwr and mystrupr.
*/
#include<stdio.h>
//implementatio  of mtstrupr()
char *mystrupr(char *src) {
  while(*src != '\0') {
    if(*src >= 97 && *src <= 122) {
      *src -= 32;
    }
    src++;
  }
  return src;
}
// implementation of mystrlwr();
char *mystrlwr(char *src) {
  while(*src != '\0') {
    if(*src>= 65 && *src<90) {
      *src += 32;
    }
    src++;
  }
  return src;
}
 
void main() {

  char str1[20];
  printf("enter a string:\n");
  scanf("%s[^\n]",str1);
  printf("Initiallly :");
  puts(str1);
  // call to mystrlwr();
  mystrlwr(str1);
  printf("string to lower case %s:\n",str1);

  // call to mystrupr();
  mystrupr(str1);
  printf("string to upper case %s:\n",str1);
}