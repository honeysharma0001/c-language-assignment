//input alphabets from user and check uppercase and lower case
#include<stdio.h>
#include<conio.h>
int main()
{
    char ch;
    printf("enter char:\n");
    scanf("%c",&ch);
    if(ch>='A'&& ch<='Z')
        printf("uppercase char");
    else if(ch>='a' && ch<='z')
    printf("lower case");
    else
    printf("not char");
    return 0;
}