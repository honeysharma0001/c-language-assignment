/*print n table*/
#include<stdio.h>
#include<conio.h>
int main()
{
  int i=1,n;
  printf("enter n:\n");
  scanf("%d",&n);
  printf("table:\n");
  while(i<=10)
  {
    int a=i*n;
  printf("%d\n",a);
  i++;
  }
  return 0;
}