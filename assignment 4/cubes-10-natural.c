/*print cubes 10 natural number*/
#include<stdio.h>
#include<conio.h>
int main()
{
  int i=1,sum=0;
  printf("cubes 10 natural number:\n");
  while(i<=10)
  {
   sum=sum+(i*i*i);
  i++;
  }
  printf("cubes sum=%d",sum);
  return 0;
}