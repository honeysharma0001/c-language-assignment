/*WAP TO TAKE INPUT AN INTEGER NUMBER AND TAKE ONLY FIRST TWO DIGIT OF THAT 
NUMBER AND OMIT REST OF THE DIGIT*/
#include<stdio.h>
int main()
{
    int n;
    printf("enter no: \n");
    scanf("%d",&n);
    int result=n/100;
    printf("first two digit no: %d\n",result);
    return 0;
}