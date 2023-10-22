//check the given number three digit number or not
#include<stdio.h>
#include<conio.h>
int main()
{
    int num;
    printf("enter num:\n");
    scanf("%d",&num);
    if(num>99 && num<1000 || num<-99 && num>-1000 )
    {
        printf("three digit num");
    }
    else
    printf("not three digit num");
    return 0;
}