#include<stdio.h>
#include<string.h>
#include<conio.h>
void main()
{
char a;
clrscr();
printf("Enter the string :");
scanf("%s",&a);
if((a>='a' && a<='z')  ||  (a>='A' && a<='Z'))
{
printf("It is alphabet\n");
}
else

printf("It is not alphabet\n");

getch();
}
