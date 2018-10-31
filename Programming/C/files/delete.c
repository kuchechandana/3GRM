#include<stdio.h>
#include<string.h>
main()
{
	FILE *f1,*f2;
	char ch,s[100];
	int del,temp=0;
	f1=fopen("data","r");
	if(f1==0)
	{
		printf("error");
		return;
	}
	printf("line number to be deleted\n");
	scanf("%d",&del);
	f2=fopen("data1","w");
	while(fgets(s,100,f1))
	{
		temp++;
		if(temp!=del)
			fputs(s,f2);
	}
	f2=fopen("data1","r");
	while(ch=fgetc(f2)!=-1)
		printf("%c",ch);
}
