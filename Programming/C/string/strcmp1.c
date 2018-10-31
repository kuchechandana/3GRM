#include<stdio.h>
#include<string.h>
int my_strcmp(const char*,const char*);
main()
{
	char s[20],s1[20];
	int p;
	printf("enter the strings s and s1\n");
	gets(s);
	gets(s1);
	p=my_strcmp(s,s1);
	if(p==0)
		printf("strings are equal\n");
	else if(p==1)
		printf("string s is greater than s1\n");
	else
		printf("string s1 is greater than s\n");

}

int my_strcmp(const char*s,const char*s1)
{
	int i;
	for(i=0;s[i];i++)
	{
		if(s[i]!=s1[i]);
		break;
	}
	if(s[i]==s1[i])
		return 0;
	else if(s[i]>s1[i])
		return 1;
	else
		return -1;
}
