//check te given number positive or non positive.
#include<stdio.h>
#include<conio.h>
int main()
{
    int num;
    printf("enter num:\n");
    scanf("%d",&num);
    if(num<0)
    {
        printf("negative number");
    }
    else{
        printf("positive number");
    }
    return 0;
}