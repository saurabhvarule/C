//    Palindrome number between range :
#include<stdio.h>
void main() 
{
  long int start;
  long int end;
  printf("enter start value\n");
  scanf("%ld",&start);
  
  printf("enter end value\n");
  scanf("%ld",&end);
  if(start == 0) {
    start = 1;
  }
  for(long int i =start; i<end;) {
    long int dup = i;
    long int rev = 0;
    while(dup>0){
      rev = rev * 10 + (dup%10);
      dup /=10;
    }
    if(rev == i) {
      printf("%ld\n",i);
    }
    i++;
  }
  
}