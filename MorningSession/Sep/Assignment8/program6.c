//factorial of a pointer using array,array of pointer and pointer :
#include<stdio.h>
void oddFactorial(int*,int(*)[10]);

void main() 
{
  int num;
  printf("enter a number :\n");
  scanf("%d",&num); 
  int arr[10];
  int fact = 1;
  for(int i =0; i<10; i++) {
    if(i == 0) {
      arr[i] = 1;
    }else{
      fact = fact *i;
      arr[i] = fact;
    }  
  }
  //call for function (passing number and whole ARRAY of factorials) )
  oddFactorial(&num,&arr);
}

void oddFactorial(int *num,int(*ptr)[10]) {
  int dup1 = *num;
  while(dup>0)
    {
      int temp = dup %10;
      if(temp%2!=0){
          printf("factorial of %d is %d \n",temp,*(*(ptr)+temp));  
      }
      dup/=10;
    }
}