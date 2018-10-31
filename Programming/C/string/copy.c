#include<stdio.h>
#include<string.h>
main()
{
char s[20],s1[20];
printf("enter 2 strings");
scanf("%s %s",&s,&s1);
strcpy(s,s1);
printf("%s",s1);
}
