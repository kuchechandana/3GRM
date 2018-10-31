#include<stdio.h>
#include<string.h>
main()
{
	char str[100],*p;
	int i;
	printf("enter the string\n");
	scanf("%s",str);
	p=str;
	for(i=0;str[i];i++,*p++);
	printf("length of string is %d",*p++);	
	printf("length of string %d",strlen(str));
}
