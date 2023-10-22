/*print n even number*/
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
    if(i%2==0)
  printf("%d\n",i);
  i++;
  }
  return 0;
}