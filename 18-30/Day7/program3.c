/*
3.WAP to check the given two strings are anagram string or not.
*/

#include<stdio.h>
#include<string.h>

// implementation of anagram funtion which returns the count of alphabets of both strings are equal;

//below function checks if both strings are anaagram or not;
int isAnagram(char *str1,char *str2) {
  char temp;
  int i = 0;
  while(*(str1 +i) != '\0') {
    int j = i+1;
    while(*(str1 +j) != '\0') {
      if(*(str1 + j) < *(str1 + i)) {
        temp = *(str1+i);
        *(str1 +i) = *(str1 +j);
        *(str1 +j) = temp;
        
      }
      if(*(str2 +j) < *(str2 +i)) {
        temp = *(str2 + i);
        *(str2 +i) = *(str2 +j);
        *(str2 +j) = temp;
      }
      j++;
    }
    i++;
  }
  int count = 0;
  while(*str1 != '\0') {
    if(*str1 == *str2) {
      count++;
      str1++;
      str2++;
    }else {
      break;
    }
  }
  return count;
}
void main() {
  char str1[20];
  char str2[20];
  
  printf("enter first string:\n");
  scanf("%s[^\n]",str1);
  
  printf("enter second string:\n");
  scanf("%s[^\n]",str2);
  
  int count = 0;
  if(strlen(str1) == strlen(str2)) {
    //call to isAnagram function only if lengths are equal
    count = isAnagram(str1,str2);
    if(count == strlen(str1)) {
      // if length and count are euqal then 2 srings are anagram.
      printf("Strings are Anagram\n",str1,str2); 
    }else {
      printf("String are Not Anagram\n",str1,str2);
    }
  }else{
    printf("Strings are Not Anagram\n");
  }
}