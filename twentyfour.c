/*WAP TO TAKE A FLOATING POINT NO AND PRINT ONLY TWO DIGITS AFTER 
THE DECIMAL POINT*/
#include<stdio.h>
int main()
{
    float n;
    printf("enter floating point no: \n");
    scanf("%f",&n);
    int result=(int)(n*100)%100;
    printf("two decimal after the decimal point:%02d\n",result);
    return 0;
}