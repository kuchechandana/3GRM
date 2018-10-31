#include<stdio.h>
#include<string.h>
main(int argc,char ** argv)
{
FILE *fp;
char s[100];
int l;
if(argc!=1)
{
printf("usage:");
return;
}
fp=fopen("data","r+");
if(fp==0)
{
printf("in file data is not there\n");
return;
}
while((fscanf(fp,"%s",s))!=-1)
{
l=strlen(s);
if(s[0]<='A'&&s[0]<='Z'||s[0]>='a'&&s[0]<='z')
{
s[l-1]=s[l-1]^32;
s[0]=s[0]^32;
fseek(fp,-1,SEEK_CUR);
fprintf(fp,"%s",s);
}
}
}
