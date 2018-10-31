#include<stdio.h>
#include<string>
main()
{
char s[20];
int l,i,c;
printf("enter the string\n");
scanf("%s",&s);
l=strlen(s);
for(i=0;i<l;i++)
{
if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
c++;
}
printf("no of vowels is %d\n",c);
}
