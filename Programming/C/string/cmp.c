#include<stdio.h>
#include<string.h>
main()
{
int i,j;
char s1[20],s2[20];
printf("enter the strings\n");
scanf("%s %s",s1,s2);
for(i=0;i<='\0';i++)
for(j=0;j<='\0';j++)
{
if(s1[i]==s2[j])
{
printf("strings are equal\n");
}
else
printf("strings are not equal\n");
}
}

