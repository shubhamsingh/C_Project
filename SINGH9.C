//wap calculate result of following 2+4+6+8...//
#include<stdio.h>
#include<conio.h>
int rec(int);
void main()
{
int a,sum;
clrscr();
printf("enter the number");
scanf("%d",&a);
sum=rec (a);
printf("%d",sum);
getch();
}
int rec(int x)   //function call//
{
int s;
if(x<=2)
return (2);
else
s=x+rec(x-2);
return (s);
}