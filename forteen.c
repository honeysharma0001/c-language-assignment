/*WAP to find return value of printf() function*/
#include<stdio.h>
int main()
{
    int n=565;
    printf("output\n");
    printf(",return value by printf() is: %d",printf("%d",n));
    return 0;
}