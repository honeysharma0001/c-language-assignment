/*print cube n natural number*/
#include<stdio.h>
#include<conio.h>
int main()
{
  int i=1,n,sum=0;
  printf("enter n:\n");
  scanf("%d",&n);
  while(i<=n)
  {
   sum=sum+(i*i*i);
  i++;
  }
  printf("sum=%d",sum);
  return 0;
}