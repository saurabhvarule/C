// strlwr() implementaion (string lowercase)
#include<stdio.h>
char* strlwr(char* src);
void main(){
  char str1[20] = "SAuRaBh";
  puts(str1);
  strlwr(str1);
  puts(str1);
}
char* strlwr(char* src) {
  while(*src!='\0') {
    if(*src >= 65 && *src<90) {
      *src += 32;
    }
    src++;
  }
  return src;
}

