#include<stdio.h>
void main()
{
  int first;
  printf("enter first number\n");
  scanf("%d",&first);
  int last;
  printf("enter last number\n");
  scanf("%d",&last);

  for(int i=first; i<last; i++) {
    for(int j =2; j<=(i/2); j++) {
      if(i%j == 0) {
        printf("%d\n",i);
        return;
      }
    }
  }
    
}