#include<stdio.h>
void main()
{
  int arr[6] = {1,2,3,4,5,6};
  ++arr[1];      //arr[1] = 3  2 becomes 3
  arr[arr[1]]++; //arr[1] = 3 ,arr[3] = 4 ++ becomes 5
  arr[arr[arr[1]]]++;  //arr1->3 arr[3] -->5 arr[5]++ -->> 6 + 1 = 7
  for(int i =0; i<6; i++) {
    printf("%d\n",*(arr + i));
  }
  
}