#include<stdio.h>
#include<string.h>
main()
{
	char s[20];
	int i,r=0;
	printf("enter the string\n");
	gets(s);
	if(s[0]=='-'||s[0]=='+')
		i=1;
	else
		i=0;

	for(i;s[i];i++)
		if(s[i]>='0'&&s[i]<='9')
		r=r*10+s[i]-48;
		else
			break;
	if(s[0]=='-')
		r=-r;
	printf("%d\n",r);
}
