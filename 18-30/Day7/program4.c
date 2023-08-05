/*
4.WAP in which make array of character pointer storing addresses of
string and print the strings.
*/

#include<stdio.h>

void main() {
 char str1[20] = "GameOfThrones";
  char str2[20] = "HouseOfTheDragon";

  char (*ptr1[]) = {str1,str2};
  for(int i=0; i<sizeof(ptr1)/sizeof(ptr1[0]); i++) {
    printf("%s\n",(ptr1[i]));
  }
}