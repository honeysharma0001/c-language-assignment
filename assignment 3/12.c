//simple calculator four operation perform add,subtract,product,division.
#include<stdio.h>
#include<conio.h>
int main()
{
    float a,b,c;
    char operator;
    printf("enter a and b:\n");
    scanf("%f%f",&a,&b);
    printf("addition perform press '+':\n");
    printf("multiply press '*' operator:\n");
    printf("division press '/' operator:\n");
    printf("subtract perform press '-':\n");
    printf("enter operator->->->:\n");
    scanf(" %c",&operator);
    if(operator=='+')
    {
    c=a+b;
    printf("%f",c);
    }
    else
       if(operator=='/')
       {
       c=a/b;
       printf("%f",c);
       }
    else
       if(operator=='-')
       {
       c=a-b;
       printf("%f",c);
       }
    else
       if(operator=='*')
       {
       c=a*b;
       printf("%f",c);
       }
    else
    printf("opertor not correct");
    return 0;
}