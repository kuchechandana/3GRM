#include<stdio.h>
main()
{
int num,i;
printf("enter the number\n");
for(num=50;num<=100;num++)
{
for(i=2;i<num;i++)
if(num%i==0)
break;
if(i==num)
{
printf("%d",i);
}
}
}
