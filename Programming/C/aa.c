#include<stdio.h> 
void main()
{
int a,b,n;
printf("enter 2 num\n");
scanf("%d %d",&a,&b);
printf("1.add\n2.sub\n3.mul\n4.div\n5.mod");
scanf("%d",&n);
switch(n)
{
case 1:
printf("1.add=%d\n",(a+b));
break;
case 2:
printf("2.sub=%d\n",(a-b));
break;
case 3:
printf("3.mul=%d\n",(a*b));
break;
case 4:
printf("4.div=%d\n",(a/b));
break;
case 5:
printf("5.mod=%d\n",(a%b));
break;
default:
printf("no option");
}
}

