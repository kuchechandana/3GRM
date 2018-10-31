#include<stdio.h>
main()
{
int num,i,j,m,n;
printf("enter the number\n");
scanf("%d",&num);
printf(" before reversing=%d\n",num);
for(i=31;i>=0;printf("%d",num>>i&1),i--);
printf("\n");
for(i=0,j=31;j>i;i++,j--)
m=num>>i&1;

n=num>>j&1;
if(m!=n)
{
num=num^1<<i;
num=num^1<<j;
}
for(i=31;i>0;printf("%d",num>>i&1),i--);
printf("after reversing=%d\n",num);
}
