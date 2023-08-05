#include<stdio.h>
#include<string.h>

void main() {
  char str1[] = {'h','e','l','l','o','\0'};
  char str2[] = "saurabh";
  char *str3 = "tanmay";
  char str4[10] = "virat";
  
  //puts(str1);
  printf("%s\n",str1);
  puts(str2);
  puts(str3);
  gets(str4);
  puts(str4);

  printf("size of str1 %ld\n",sizeof(str1));
  printf("length of str1 %ld\n",strlen(str1));
  printf("size of str2 %ld\n",sizeof(str2));
  printf("length of str1 %ld\n",strlen(str2));
  printf("size of str3 %ld\n",sizeof(str3));
  printf("length of str1 %ld\n",strlen(str3));
  printf("size of str4 %ld\n",sizeof(str4));
  printf("length of str4 %ld\n",strlen(str4));

  }