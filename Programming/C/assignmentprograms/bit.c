#include<stdio.h>
main()
{
int i,num;
printf("enter the num");
scanf("%d",&num);
for(i=31;i>=0;i--)
{
if(num>>i&1)
printf("1");
else
printf("0");
}
}
