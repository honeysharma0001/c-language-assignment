/*print reverse n even number*/
#include<stdio.h>
#include<conio.h>
int main()
{
  int i,n;
  printf("enter n:\n");
  scanf("%d",&n);
  i=n*2;
  while(i>=1)
  {
    if(i%2==0)
  printf("%d\n",i);
  i--;
  }
  return 0;
}