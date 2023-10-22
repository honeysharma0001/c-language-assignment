//WAP to check whether a given number is divisible by 7 or by 3
#include<stdio.h>
#include<conio.h>
int main()
{
    int num;
    printf("enter num:\n");
    scanf("%d",&num);
    if(num%7==0 || num%3==0)
     printf("divisible num=%d",num);
     else
     printf("not divisible");
     return 0;
}