// strrev() implementaion (string reverse)
#include<stdio.h>
char* strrev(char* str1) {
  char* str2 = str1;
  while(*str2!='\0') {
    str2++;
  }
  str2--;
  char temp;
  while(str1 < str2) {
    temp = *str1;
    *str1 = *str2;
    *str2 = temp;
    str1++;
    str2--;
  }
  return str1;
  
}
void main() {
  char str1[20];
  puts("enter a string :");
  gets(str1);
  strrev(str1);
  puts(str1);
}