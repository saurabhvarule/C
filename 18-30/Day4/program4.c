#include<stdio.h>

//funtion to check prime or not ?
void isPrime(int x) {
  int flag = 0;
  for(int i=2; i<=x/2; i++) {
    if(x%i==0) {
      flag = 1;
      break;
    }
  }
  if(flag==0) {
    printf("%d is Prime\n",x);
  }else {
    printf("%d is Not Prime\n",x);
  }
}
void main() {
  
  int x;
  printf("enter a number to check prime or not ? :\n");
  scanf("%d",&x);
  
  if(x>0) {
    isPrime(x);
  }else{
    printf("%d is Not Prime\n",x);
  }
}