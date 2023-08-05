#include<stdio.h>
void main(int argc,char* argv[]) {
  //puts(argv[1]);
  printf("%d\n",argc);
  for(int i=1; i<argc; i++) {
    printf("%s\n",argv[i]);
  }
}