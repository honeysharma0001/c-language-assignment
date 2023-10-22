/*WAP TO CHECK WHETHER A GIVEN CHARACTER IN AN ALPHABET(UPPERCASE) AN ALPHABET(LOWERCASE)
A DIGIT OR A SPECIAL CHARACTER.*/
#include<stdio.h>
#include<conio.h>
int main()
{
    char ch;
    printf("enter character:\n");
    scanf("%c",&ch);
    if(ch>='A' && ch<='Z')
    printf("UPPERCASE");
    else if(ch>='a' && ch<='z')
    printf("lowercase");
    else 
    printf("special char");
    return 0;
}