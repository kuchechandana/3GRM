#include<stdio.h>
main(int argc,char **argv)
{
char ch;
FILE *fp,*fd;
if(argc !=3)
{
printf("usage:./a.out sf df\n");
return;
}
fp=fopen(argv[1],"r");
if(fp==0)
{
printf("file not present\n");
return;
}
fd=fopen(argv[2],"w");
while((ch=fgetc(fp))!=-1)
fputc(ch,fd);
}
