//greater among the three number.
#include<stdio.h>
#include<conio.h>
int main()
{
    int num1,num2,num3;
    printf("enter num1:\n");
    scanf("%d",&num1);
    printf("enter num2:\n");
    scanf("%d",&num2);
    printf("enter num3:\n");
    scanf("%d",&num3);
    if(num1>num2 && num1>num3)
        printf("num1 greater");
    else if(num2>num1 && num2>num3)
    printf("num2 greater");
    else if(num3>num1 && num3>num2)
    printf("num3 greater");
    else
    printf("same number");
    return 0;
}