/*
2.WAP which shows the concept of command line argument.
*/
#include<stdio.h>
// we give input to main function which is known as command line argument : which means that we can give input on runtime of a program.

//below program shows the concept of command line argunment
void main(int argc,char** argv) {
  
  for(int i=0; i<argc; i++) {
  printf("%s\n",argv[i]);  
  }
}