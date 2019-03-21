#include<stdio.h>
#include<conio.h>
int main()
{
int n1,n2,t;
clrscr();
printf(" before swap");
scanf("%d%d",&n1,&n2);
t=n1;
n1=n2;
n2=t;
printf("after swap %d%d",n1,n2);
return 0;
}
