/*WAP TO TAKE AS AN INPUT IN BELOW GIVEN FORMAT AND CONVERT YHE TIME
FORMAT AND DISPLAY THE RESULT AS GIVEN BELOW*/
#include<stdio.h>
int main()
{
    int HH,MM,SS;
    printf("enter HH:MM:SS :\n");
    scanf("%d\n%d\n%d",&HH,&MM,&SS);
    printf("%d Hour %d Minute and %d Second",HH,MM,SS);
    return 0;
}