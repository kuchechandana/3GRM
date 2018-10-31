#include<stdio.h>
main()
{
FILE *fptr;
int ch;
if((fptr=fopen("my","r"))==0)
{
printf("error in opening in file\n");
}
printf("enter text\n");
while((ch=getc(fptr))!=EOF)
printf("%c",ch);
return 0;
}
