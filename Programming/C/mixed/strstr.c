#include<stdio.h>
#include<string.h>
char *strstr(const char*,const char*);
main()
{
	char s[20],s1[20];
	int p;
	printf("enter the strings s and s1\n");
	gets(s);
	gets(s1);
	p=strstr(s,s1);
	if(p)
		printf("substring is present\n");
	else
		printf("substring is not present\n");
}
char *strstr(const char *s,const char *s1)
{
	int i,j;
	for(i=0;s[i];i++)
	{
		if(s[i]==s1[0])
		{
			for(j=1;s1[j];j++)
				if(s[i+j]!=s1[j])
					break;
		}
		if(s1[j]=='\0')
			return s+i;
	}
}
