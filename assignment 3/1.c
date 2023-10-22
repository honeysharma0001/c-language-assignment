//check the number even or not
#include<stdio.h>
#include<conio.h>
int main()
{
    int num;
    printf("enter num:\n");
    scanf("%d",&num);
    if(num%2==0)
    {
        printf("even number");
    }
    else{
        printf("odd number");
    }
    return 0;

}