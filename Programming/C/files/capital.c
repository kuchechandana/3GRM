#include<stdio.h>
#include<string.h>
main()
{
	char ch,s[100];
	FILE *f1;
	int l;
	f1=fopen("data1","r+");
	if(f1==0)
	{
		printf("error");
		return;
	}
	while((fscanf(f1,"%s",s))!=-1)
	{
		l=strlen(s);
		if(s[0]>='A'&&s[0]<='Z'||s[0]>='a'&&s[0]<='z')
		{
			//s[l-1]=s[l-1]^32;
			s[0]=s[0]^32;
			fseek(f1,-1,SEEK_CUR);
			fprintf(f1,"%s",s);
		}
	}
}
