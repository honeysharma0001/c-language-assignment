/*WAP to count number of character in this string- "C Programming" using
 printf() function*/
 #include<stdio.h>
 #include<conio.h>
 int main()
 {
     char str[]="c programming";
     int i;
     for(i=0;str[i]!='\0';++i);
        printf("no of digit: %d",i);
     return 0;
 }