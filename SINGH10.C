//wap sum of digit of 5 digit number//
#include<stdio.h>
#include<conio.h>
int rec(long);
void main()
{
long a,sum;
clrscr();
printf("enter the number");
scanf("%ld",&a);
sum=rec (a);
printf("%ld",sum);
getch();
}
int rec(long x)   //function call//
{
int s;
if(x<=9)
return (x);
else
s=x%10;
x=x/10;
s=s+rec(x);
return (s);
}