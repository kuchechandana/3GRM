#include<stdio.h>
main()
{
int n,i,j,sum=0,c=0;
printf("enter n\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
for(j=1;j<i;j++)
{
if(i%j==0)
{
c++;
sum=sum+i;
}
if(sum==j)
printf("%d",j);
}
}
