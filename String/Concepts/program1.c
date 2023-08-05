#include<stdio.h>
void main() {
  // String can be written in C by 2 different types;
  //1.by providing []
  char str1[] = "Saurabh"; //-->>it is stored in stack frame

  //2.by char pointer
  char *str2 = "Tanmay"; //-->> it is sored in RO Data section

  printf("%s\n",str1);
  printf("%s\n",str2);

  //to take a string from a user we can only take it from str[] type .
  char name[20];
 // scanf("%[^\n]",name);  //-->> not a proper way only used when you called to use scanf();
  gets(name);
  printf("%s\n",name);
  puts(name);

 // every string ends with \0,cause it works as a boundry for a string,if not given there may be chanceof getting more data from another adresses.

  //funtions gets() and puts() are specially used for stirngs gets() for runtime data and puts() to print data 
}