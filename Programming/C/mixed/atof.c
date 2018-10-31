#include<stdio.h>
#include<string.h>
main()
{
	char s[20];
	int i,r=0,r1=0,l=1;
	float f,f1;
	printf("enter the string\n");
	gets(s);
	if(s[0]=='-'||s[0]=='+')
		i=1;
	else
		i=0;
	for(i;s[i]!='.';i++)
	{
		if(s[i]>='0'&&s[i]<='9')
			r=r*10+s[i]-48;
		else
			break;

	}
	for(i=i+1;s[i];i++)
	{
		if(s[i]>='0'&&s[i]<='9')
		{
			r1=r1*10+s[i]-48;
//		printf("%d\n",r1);
		}
		
		else
			break;
	l=l*10;

//		printf("%d\n",l);
	}

//		printf("%d\n",r1);
	f1=(float)r1/l;
//	printf("%d\n",f1);
	f=r+f1;
	if(s[0]=='-')
		f=-f;
	printf("%f\n",f);
}
