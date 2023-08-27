/*WAP to take radius of circle and print area of circle in following format.*/
#include<stdio.h>
#include<conio.h>
int main()
{
    float r,area;
    printf("enter radius of circle: \n");
    scanf("%f",&r);
    area=3.14*r*r;
    printf("area of circle is %f having radius %f",area,r);
    return 0;
}