/*
2. WAP to use predefined length function and your own length function for array.(get
array from user).

*/
// implementaion of strlen() :
int mystrlen(char *src) {
  int l = 0;
  while(*src != '\0') {
    l++;
    src++;
  }
  return l;
}

#include<stdio.h>

void main() {
  char str1[20];
  printf("enter first string:\n");
  scanf("%s[^\n]",str1);
  printf("%s\n",str1);
  
  char str2[20];
  printf("enter second string:\n");
  scanf("%s[^\n]",str2);
  printf("%s\n",str2);
  
  //length using predifine function :
  int length1 = strlen(str1);
  printf("length of the string 1 is : %d\n",length1);
  
  //length using my function :
  int length2 = mystrlen(str1);
  printf("length of the string 2 is : %d\n",length2);
}