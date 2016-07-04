#include<stdio.h>
#include<conio.h>
void main()
{
int i;
long n,sum=0;
clrscr();
scanf("%ld",&n);
for(i=1;i<=n;i++)
{
sum=sum+i;
}
printf("%ld",sum);
getch();
}
