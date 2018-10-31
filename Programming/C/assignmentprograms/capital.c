#include<stdio.h>
#include<string.h>
main()
{
char s[10];
int i;
printf("enter the word\n");
scanf("%s",&s);
for(i=0;s[i];i++)
if(s[i]>='a'&&s[i]<='z')
{
s[i]=s[i]-32;
}
else
{
s[i]=s[i]+32;
}
printf("changed word is %s",s);
}
