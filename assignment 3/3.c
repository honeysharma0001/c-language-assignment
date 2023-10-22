//check number divisible 5 or not
#include<stdio.h>
#include<conio.h>
int main()
{
    int num;
    printf("enter num:\n");
    scanf("%d",&num);
    if(num%5==0)
    {
        printf("divisible in 5");
    }
    else{
        printf("not divisible ");
    }
    return 0;
}