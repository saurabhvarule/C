/*
4. Write a function for string reverse and check it reversed string and original string is
same or not.
*/

#include<stdio.h>
// implementation of string reverse :
char *strrev(char* src) {
  char *temp = src;
  
  while(*temp != '\0') {
    temp++;
  }
  temp--;
  char temp2;
  while(src < temp) {
    temp2 = *src;
    *src = *temp;
    *temp = temp2;
    src++;
    temp--;
  }
  
  return src;
}
void main() {
  
  char str1[20];
  printf("enter first string :\n");
  scanf("%s[^\n]",str1);
  
  printf("before reverse : %s \n",str1);
  
  //call to strrev
  strrev(str1);
  
  printf("after reverse : %s \n",str1);
  
}