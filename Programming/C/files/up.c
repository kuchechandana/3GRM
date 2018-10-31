#include<stdio.h>
#include<string.h>
main()
{
	char ch;
	FILE *fp;
	fp=fopen("data","r");
	if(fp==0)
	{
		printf("error in opning file\n");
		return;
	}
	while((ch=fgetc(fp))!=-1)
	{
		ch=ch^32;
	printf("%c",ch);
	}
}
