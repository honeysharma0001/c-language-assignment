/*print n natural number*/
#include<stdio.h>
#include<conio.h>
int main()
{
  int i=1,n;
  printf("enter n:\n");
  scanf("%d",&n);
  while(i<=n)
  {
  printf("%d\n",i);
  i++;
  }
  return 0;
}