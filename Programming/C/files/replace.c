#include<stdio.h>
#include<string.h>
main()
{
	char s[100],s1[20],ch;
	int num,temp=0;
	FILE *f1,*f2;
	f1=fopen("data","r");
	if(f1==0)
	{
		printf("error");
		return;
	}
	printf("line number to be replaced\n");
	scanf("%d",&num);
	printf("string to be replaced in that line\n");
	scanf("%s",s1);
	f2=fopen("data2","w");
	while(fgets(s,100,f1))
	{
		temp++;
		if(temp!=num)
		{
			fputs(s,f2);
		}
		else
		{
			fprintf(f2,"%s",s1);
			fputc('\n',f2);
		}
	}
	f2=fopen("data2","r");
	while((ch=fgetc(f2))!=-1)
		printf("%c",ch);
}
