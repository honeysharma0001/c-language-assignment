/*print n reverse odd number*/
#include<stdio.h>
#include<conio.h>
int main()
{
  int i,n;
  printf("enter n:\n");
  scanf("%d",&n);
  i=n*2;
  while(i>=0)
  {
    if(i%2!=0)
  printf("%d\n",i);
  i=i-1;
  }
  return 0;
}