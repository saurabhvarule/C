#include<stdio.h>
void main() {
  char *str1;
  char str2[20];
  gets(str2);
  
  //1.gets(str1); -->> this will throw an error cause adresses     are given to stirng during compile time and we can not change the string str2 cause it stored in ro data;
//2.RO Data dont allow to cahnge the data during runtime ;
//3.but we can pass [] string of runtime to char *str types;
  
  str1 = str2;
  puts(str1);
  puts(str2);
}