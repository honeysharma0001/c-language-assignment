// check even or odd without % operator use.
#include<stdio.h>
#include<conio.h>
int main()
{
    int num;
    printf("enter num:\n");
    scanf("%d",&num);
    if(num & 1!=0)
    {
        printf("odd number");
    }
    else
    {
        printf("even no");
    }
    return 0;
}