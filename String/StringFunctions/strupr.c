// strupr() implentation (string upper)
#include<stdio.h>
char* strupr(char* src) {
  while(*src!='\0') {
    if(*src >=97 && *src<=122) {
      *src -= 32;
    }
    src++;
  }
  return src;
}
void main() {
  char str1[20] = "saurabh";
  puts(str1);
  strupr(str1);
  puts(str1);
}