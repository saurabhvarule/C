#include<stdio.h>
void main()
{
  int arr1[2][3][3] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18};

  printf("%d\n",arr1[0][1][2]);
  /*          |  
  this line INTERNALLY work as a pointer
              |
  (*(*(arr1 + 0*sizeof(whole plane)) + 1 * sizeof(1D array) + 2 * sizeof(data type of pointer)));
              |
  *(*(*(arr1 + 0 * 36) + 1 * 12) + 2 * 4)
              |
    *(*(*(100)+12)+8) = *(*(112)+8) = value at(120) = 6;

  */
  //for example
  printf("%d\n",*(*(*(arr1 +0) + 1) +2));

  
}