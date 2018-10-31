#include<stdio.h>
main(int argc,char **argv)
{
	FILE *fp;
	int c=0,c1=0,c2=0;
	char ch,s[200];
	fp=fopen(argv[1],"r");
	if(fp==0)
		printf("file is not present\n");
	while((fscanf(fp,"%s",s))!=-1)
		c1++;
	while(ch=fgetc(fp)!=EOF)
	{
		c++;
		if(ch=='\n')
			c2++;
	}
	while((fscanf(fp,"%s",s))!=-1)
		c1++;
	printf("No of letters=%d\n",c);
	printf("No of words=%d\n",c1);
	printf("No of lines=%d\n",c2);
}
