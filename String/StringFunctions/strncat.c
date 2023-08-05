#include<stdio.h>
char* mystrncat(char *str1,char*str2,int n) {
  while(*str1!='\0') {
    str1++;
  }
  while(*str2!='\0' && n!=0) {
    *str1 = *str2;
    str1++;
    str2++;
    n--;
  }
  return str1;
}
void main() {
  char str1[20] = "Saurabh";
  char str2[20] = "Varule";
  int n;
  puts("enter no of char to copy :");
  scanf("%d",&n);
  puts(str1);
  puts(str2);
  mystrncat(str1,str2,n);
  puts(str1);
  puts(str2);
  
}