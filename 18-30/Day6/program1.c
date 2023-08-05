/*
1. WAP to initilise a character array or String in a multiple way and print (from user and
hardcoaded using for loop and get()).

*/

#include<stdio.h>
#include<string.h>

void main() {
  char str1[20] = {'s','a','u','r','a','b','h','\0'};
  char* str2 = "saurabh";
  char str3[20] = "saurabh";

  char str4[20];
  printf("enter a string:\n");
  gets(str4);

  
  //using puts :
  puts(str1);
  puts(str2);
  puts(str3);  //-->> multiple strings printed using puts
  puts(str4);

  //using for loop :
  printf("str1 :\t");
  for(int i=0; i<strlen(str1); i++) {
    printf("%c",str1[i]);
  }
  printf("\n");
  
  printf("str2 :\t");
  for(int i=0; i<strlen(str2); i++) {
    printf("%c",str2[i]);
  }
  printf("\n");
  
  printf("str3 :\t");
  for(int i=0; i<strlen(str3); i++) {
    printf("%c",str3[i]);
  }
  printf("\n");
  
  printf("str4 :\t");
  for(int i=0; i<strlen(str4); i++) {
    printf("%c",str4[i]);
  }
  printf("\n");

  
}