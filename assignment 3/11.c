//user given marks fail or pass.
#include<stdio.h>
#include<conio.h>
int main()
{
    float marks,s1,s2,s3,s4,s5;
    printf("enter first subject:\n");
    scanf("%f",&s1);
    printf("enter two subject:\n");
    scanf("%f",&s2);
    printf("enter three subject:\n");
    scanf("%f",&s3);
    printf("enter four subject:\n");
    scanf("%f",&s4);
    printf("enter five subject:\n");
    scanf("%f",&s5);
    if(s1>=33 && s2>=33 && s3>=33 && s4>=33 && s5>=33)
    printf("pass");
    else
    printf("fail");
    return 0;
}