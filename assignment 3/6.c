//print greater between two number
#include<stdio.h>
#include<conio.h>
int main()
{
    int num1,num2;
    printf("enter num1:\n");
    scanf("%d",&num1);
    printf("enter num2:\n");
    scanf("%d",&num2);
    if(num1<num2)
    printf("num2 is greater");
    else if(num1>num2)
         printf("num1 is greater");
    else
    printf("same number");
    return 0;
}