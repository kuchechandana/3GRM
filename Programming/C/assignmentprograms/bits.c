#include<stdio.h>
main()
{
int i,j,num,pos,m;
printf("enter the num\n");
scanf("%d",&num);
for(i=31;i>=0;printf("%d",num>>i&1),i--);
printf("\n");
printf("enter the pos\n");
scanf("%d",&pos);
m=num>>pos;
for(m=31;m>=0;printf("%d",num>>m&1),i--);




}
