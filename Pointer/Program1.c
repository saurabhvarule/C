
int printf(const char*,...);

void main()
{
  int x = 10;

  int *ptr1 = &x;

  printf("%d\n",x);
  //printf("%p\n",ptr1);
  //printf("%d\n",ptr1);
  printf("%d\n",*ptr1);
}