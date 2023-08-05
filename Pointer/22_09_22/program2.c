#include<stdio.h>
void main()
{
  int arr1[] = {10,20,30};
  int arr2[] = {40,50,60};
  
  int (*iptr1)[] = &arr1;
  int (*iptr2)[] = &arr2;

  int *iptr3 = arr1;
  int *iptr4 = arr2 + 2;

  printf("%d \n",*iptr3);
  printf("%d \n",*iptr4);
  iptr3++;
  iptr4--;
  
  printf("%d \n",*iptr3);
  printf("%d \n",*iptr4);

  
  printf("%d \n",*((*iptr1)));
  printf("%d \n",*((*iptr1)+1));
  printf("%d \n",*((*iptr1)+2));
}