/*
3. WAP to your own string copy function and concat it , print the copied and concated
string.

*/


#include<stdio.h>
//iplementation of string copy funtion :
char* mystrcpy(char* dest,char* src) {
  while(*src != '\0') {
    *dest = *src;
    dest++;
    src++;
  }
  *dest = '\0';

  return dest;
  
}

// implementation of string concat :
char* mystrcat(char* dest,char* src) {
  while(*src != '\0') {
    src++;
  }
  
  while(*dest != '\0') {
    *src = *dest;
    src++;
    dest++;
  }
  *src = '\0';
}
void main() {
  
  char str1[20];
  printf("enter first string :\n");
  scanf("%s[^\n]",str1);
  
  char str2[20];
  printf("enter first string :\n");
  scanf("%s[^\n]",str2);

  char cpystr[20];

  printf("str 1 : %s \n",str1);
  printf("str 2 : %s \n",str2);
  //function call to strcpy:
  mystrcpy(cpystr,str1);
  printf("copied string : %s \n",cpystr);
  
  //function call to strcat
  mystrcat(str2,str1);
  printf("concated string : %s \n",str1);
  
  
}