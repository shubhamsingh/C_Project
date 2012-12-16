
//wap to genrate table of number not complite//
#include<stdio.h>
#include<conio.h>
int rec(int,int);
void main()
{
long a,sum;
clrscr();
printf("enter the number");
scanf("%d",&a);
sum=rec (a,9);
printf("%d",sum);
getch();
}
int rec(int x,int n)   //function call//
{
int s;
s=x*10;
printf("%d",s-n*x);
if(n=0)
return x;
rec(x,n-1);
else
return 0;
}