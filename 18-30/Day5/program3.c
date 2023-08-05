/*
3.)Write a function for reverse number, even or odd number, prime number and call the all
function using array of function. 
*/
#include<stdio.h>

//reverse function
void rev(int x) {
  int dup = x;
  int rev = 0;
  while(x>0) {
    rev = rev * 10 + x % 10;
    x /= 10;
  }
  printf("%d = %d\n",dup,rev);
  
}
//even function
void evenNum(int x) {
  if(x%2==0) {
    printf("%d is Even\n",x);
  }else {
    printf("%d is Odd\n",x);
  }
}

//prime function
void isPrime(int x) {
  int flag = 0;
  for(int i=2; i<=x/2; i++) {
    if(x%i==0) {
      flag = 1;
      break;
    }
  }
  if(flag == 1 || x==0) {
    printf("Not Prime\n");
  }else {
    printf("Prime\n");
  }
}
 
void main() {  
  int x;
  printf("enter a number :\n");
  scanf("%d",&x);
  
  void (*ptr[])(int)= {evenNum,rev,isPrime}; //-->> array of function pointer

  for(int i=0; i<3; i++) {
    ptr[i](x);
  }
  
  //evenNum(x);
  //isPrime(x);
  //rev(x);

  
  
}