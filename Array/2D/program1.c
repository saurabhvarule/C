
#include<stdio.h>
void main()
{
  int arr1[][3] = {1,2,3,4,5,6,7,8,9};
  int arr2[3][3] = {1,2,3,4,5,6,7,8,9};
  int arr3[][3] = {{1,2,3},{4,5,6},{7,8,9}};

  printf("%d\n",arr1[1][2]);
  /*              |  
  this line INTERNALLY work as a pointer
                  |
  *(*(arr1 + 1*sizeof(1d array)) + 2 * sizeof(data type of pointer)));
                  |
  *(*(arr1 + 1 * 12) + 2 * 4)
                  |
    *(*(112)+8) = *(120) = value at(120) = 6;

  */
  //for example
  printf("%d\n",*(*(arr1 +1) + 2));

  
}