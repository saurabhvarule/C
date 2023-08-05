#include<stdio.h>
// my strcat() implentation (string concatination)

char* mystrcat(char* str1,char* str2) {
  while(*str1!=0) {
    str1++;
  }
  while(*str2 != 0) {
    *str1 = *str2;
    str1++;
    str2++;
  }
  *str1 = '\0';
  return str1;
}
void main() {
  char str1[20] = "saurabh";
  char str2[20] = "varule";
  //strcat(str1,str2);
  puts(str1);
  //call to mystrcat
  mystrcat(str1,str2);
  puts(str1);
  puts(str2);
}