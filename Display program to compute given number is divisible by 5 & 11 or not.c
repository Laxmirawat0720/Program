#include<stdio.h>
#include<conio.h>
void main()
{
int n;
clrscr();
printf("enter a number");
scanf("%d",&n);
if(n%5==0&&n%11==0)
printf("number is divisible by 5 and 11");
else
printf("number is not divisible by 5 and 11");
getch();
}
