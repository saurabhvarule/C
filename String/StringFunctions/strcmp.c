#include<stdio.h>
//my strcmp implementation :
int mystrcmp(char* str1,char* str2) {
  while(*str1 != '\0') {
    if(*str1 == *str2){
      str1++;
      str2++;
    }else{
      return *str1-*str2;
    }
  }
  return 0;
}
void main() {
  char str1[10];
  printf("enter a string 1\n");
  gets(str1);
  puts(str1);
  char str2[10];
  printf("enter a string 2\n");
  gets(str2);
  puts(str2);
  int diff = 1;
  if(strlen(str1)==strlen(str2)) {
    diff = mystrcmp(str1,str2);
  }
  
  if(diff == 0){
    printf("strings are equal \n");
  }else {
    printf("strings are not equal \n");
  }
    
}