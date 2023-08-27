/* WAP to take two numbers as input add print sum of
 the numbers in following format*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b;
    printf("enter a and b: \n");
    scanf("%d%d",&a,&b);
    int c=a+b;
    printf("sum of %d and %d is %d",a,b,c);
    return 0;
}