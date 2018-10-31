#include<stdio.h>
#include<string.h>
main(int argc,char **argv)
{
	char ch;
	FILE *fp;
	if(argc!=2)
	{
		printf("usage:./a.out filename");
		return;
	}
	fp=fopen(argv[1],"r");
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
