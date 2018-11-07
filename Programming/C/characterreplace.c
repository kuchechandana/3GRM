void f(char *s,char a, char b)
main()
{
	char str[100],a,b;
	printf("enter a string");
	gets(str);
	printf("enter 2 charecters:");
	scanf("%c %c",&a,&b);
	f(str,a,b);
	puts(str);
	return 0;
}
void f(char*str, char a, char b)
{
	if(*str=='10')
		return;
	if(*str==a)
		*str=b;
	f(str+1,a,b);
}
*main()
	char str1[]="parul", str2[]"devanshi";
if(strlen(str1)+strlen(str2)<=0)
	puts(str1);
	else
	iputs(str2);
	}
