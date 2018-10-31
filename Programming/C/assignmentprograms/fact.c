#include<stdio.h>
main()
{
int n,num,fact=1;
printf("enter the num");
scanf("%d",&num);
n=num;
while(n>1)
{
fact=fact*n;
n--;
}
printf("%d",fact);
}
