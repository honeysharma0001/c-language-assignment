/*print n odd number*/
#include<stdio.h>
#include<conio.h>
int main()
{
  int i=1,n;
  printf("enter n:\n");
  scanf("%d",&n);
  n=n*2;
  while(i<=n)
  {
  printf("%d\n",i);
  i=i+2;
  }
  return 0;
}