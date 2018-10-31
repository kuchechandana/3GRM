#include<stdio.h>
int main()
{
int a,b,carry;
printf("enter the two numbers\n");
scanf("%d %d\n",&a,&b);
while(b!=0)
{
carry=a&b;
a=a^b;
b=carry<<1;
}
printf("%d",a);
return 0;
}
