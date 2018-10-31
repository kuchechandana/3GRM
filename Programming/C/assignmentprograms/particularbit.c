#include<stdio.h>
main()
{
int i,num,pos;
printf("enter num\n");
scanf("%d",&num);
printf("enter pos\n");
scanf("%d",&pos);
num=num|(1<<pos);
for(i=31;i>=0;i--)
printf("%d",num>>i&1);
printf("%d",num);
}

