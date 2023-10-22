//check whether A character is vowel or constant.
#include<stdio.h>
#include<conio.h>
int main()
{
    char ch;
    printf("enter character:\n");
    scanf("%c",&ch);
    if(ch>='A' && ch<='Z' || ch>='a' && ch<='z')
    {
        if(ch=='A' || ch=='E' || ch=='a' || ch=='e' || ch=='I' || ch=='i' || ch=='o' || ch=='O' ||ch=='u' || ch=='U')
        {
            printf("char is vowels=%c",ch);
        }
        else{
            printf("char is constant=%c",ch);
        }
    }
    else
    printf(" char not alphabets");
    return 0;
}