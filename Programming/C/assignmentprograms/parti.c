#include<stdio.h>
main()
{
int i,num,pos;
printf("enter num and pos");
scanf("%d %d",&num,&pos);
num=num ^ (1<<pos);
for(i=31;i>=0;i--)
printf("%d",num>>i&1);
printf("\n%d",num);
}
