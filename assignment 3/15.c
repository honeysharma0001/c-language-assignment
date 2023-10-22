//check given number positive or negativeor zero.
#include<stdio.h>
#include<conio.h>
int main()
{
    int num;
    printf("enter num:\n");
    scanf("%d",&num);
    if(num<=-1)
    printf("negative number");
    else if(num>=1)
    printf("positive number");
    else if(num==0)
    printf("zero");
    else
    printf("not number");
    return 0;
}