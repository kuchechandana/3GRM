#include<stdio.h>
#include<string.h>
main(int argc,char **argv)
{
	char s[20],rev[20],ch;
	FILE *fp;
	int i,j,l;
	if(argc!=3)
	{
		printf("usage:./a.out fname string\n");
		return;
	}
	fp=fopen(argv[1],"r+");
	if(fp==0)
	{
		printf("error\n");
		return;
	}
	strcpy(rev,argv[2]);
	for(i=0;rev[i];i++)
		for(i=i-1,j=0;i>j;j++)
		{
			ch=rev[i];
			rev[i]=rev[j];
			rev[j]=ch;
		}
	l=strlen(argv[2]);
	while(fscanf(fp,"%s",s)!=-1)
		if(strcmp(s,argv[2])==0)
		{
			fseek(fp,-1,SEEK_CUR);
			fprintf(fp,"%s",rev);
		}
}
