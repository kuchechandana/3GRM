#include<stdio.h>
main()
{
int n,i,j,c=0;
printf("enter n\n");
scanf("%d",&n);
for(i=2;i<n;i++)
{
for(j=2;j<i;j++)
if(i%j==0)
{
c++;
break;
}
if(j==i)
{ 
printf("%d",j);
}
}
}
