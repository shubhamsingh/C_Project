//write a recursive function to obtain the sum of first 25 natural number//
#include<stdio.h>
#include<conio.h>
int rec(int);
void main()
{
int a,sum;
clrscr();
printf("enter the number");     //enter the number 25//
scanf("%d",&a);
sum=rec (a);
printf("%d",sum);
getch();
}
int rec(int x)   //function call//
{
int s;
if(x<=1)
return (1);
else
s=x+rec(x-1);
return (s);
}