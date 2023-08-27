/* WAP to take date as an input in below given format and convert the date 
format and display the given below*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int DD,MM,YYYY;
    printf("enter day DD-MM-YYY: \n");
    scanf("%d\n%d\n%d",&DD,&MM,&YYYY);
    printf("Date is %d month is %d and Year is %d",DD,MM,YYYY);
    return 0;
}