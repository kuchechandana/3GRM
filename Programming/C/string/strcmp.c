#include<stdio.h>
#include<string.h>
main()
{
	char s[20],s1[20];
	int i,j,t;
	printf("enter 2 strings\n");
	scanf("%s %s",&s,&s1);
	for(i=0,j=0;s[i]!='\0',s[j]!='\0';i++,j++)
	{
		if(s[i]==s1[j])
			t=1;
		else
			t=0;
	}
	if(t==1)
		printf("equal");
	else
		printf("not equal");
}
