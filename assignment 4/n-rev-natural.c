/*print n reverse natural number*/
#include<stdio.h>
#include<conio.h>
int main()
{
  int i,n;
  printf("enter n:\n");
  scanf("%d",&n);
  i=n;
  while(i>=1)
  {
  printf("%d\n",i);
  i--;
  }
  return 0;
}