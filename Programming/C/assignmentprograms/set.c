#include<stdio.h>
main()
{
int i,num,c=0,c1=0;
printf("enter num");
scanf("%d",&num);
for(i=31;i>=0;i--)
{
if(num>>i&1)
c++;
else
c1++;
}
printf("set bits=%d clear bits=%d\n",c,c1);
}
