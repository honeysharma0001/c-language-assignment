//divisible 3 and 2 given number.
#include<stdio.h>
#include<conio.h>
int main()
{
    int num;
    printf("enter num:\n");
    scanf("%d",&num);
    if(num%2==0 && num%3==0)
    printf("divsible num=%d",num);
    else
    printf("not divisible number");
    return 0;
}