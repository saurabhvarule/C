/*
5. WAP to get 2 strings from user and compare that with case ignore(write your on
string compare function with ignore case).
*/

#include<stdio.h>

int strcmp(char* str1, char* str2) {
  while(*str1 != '\0') {
    if(*str1== *str2 || *str1 - *str2 == 32 || *str1 - *str2 == -32) {
      str1++;
      str2++;
    }else{
      return *str1 - *str2;
    }
  }
}

void main() {
  
  char str1[20];
  printf("enter first string :\n");
  scanf("%s[^\n]",str1);
  
  char str2[20];
  printf("enter first string :\n");
  scanf("%s[^\n]",str2);

  int diff = 1;
  if(strlen(str1) == strlen(str2)) {
    diff = strcmp(str1,str2);
  }

  if(diff == 0) {
    printf("Strings are equal \n");
  } else {
    printf("Strings are Not equal \n");
  }
}