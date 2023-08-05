/*
1.WAP which shows the example of array of string and print the
array.
*/
#include<stdio.h>
void main() {
  // Array of strings :
  char (*friends[]) = {"tanmay","bhushan","ganesh","harshal"};

  for(int i=0;i<sizeof(friends) / sizeof(friends[0]); i++) {
    puts(friends[i]);
  }
  
}