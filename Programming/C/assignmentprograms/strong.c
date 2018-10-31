#include<stdio.h>
main()
{
int a,b,num,i,fact=1,sum=0;
printf("enter n\n");
scanf("%d",&num);
b=num;
while(num)
{
a=num%10;
fact=1;
while(a>=1)
{
fact=fact*a;
a=a-1;
}
sum=sum+fact;
a=a/10;
}
if(sum==b)
printf("%d",sum);
else
printf("not strong\n");
}
