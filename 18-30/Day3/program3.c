/*
Concept of pinter to an array :
Concept of array of pointer to an array:
*/

#include<stdio.h>
void main() {
  int arr1[5] = {10,20,30,40,50};
  int arr2[5] = {60,70,80,90,100};
  
  int(*ptr1)[] = &arr1;  // -->> pointer which holds the address of whole array which is poniter to an array

  for(int i=0; i<5; i++) {
    printf("%d\n",*((*ptr1) +i));
  }

  int (*ptr2[])[] = {&arr1,&arr2}; // -->> array of pointer to an array
//-------------------------------------------
    for(int i=0; i<5; i++) {             // |
    printf("%d\n",*(*(*(ptr2+1))+i));    // |-->>array of pointer to array
  }                                      // |
}                                        // |
//--------------------------------------------

// |-->> the above code shows the concept of pointer to an array