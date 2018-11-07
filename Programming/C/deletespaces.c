#include<stdio.h>
#include<string.h>
void del_multspaces(char *str);
int main(void)
{
	char str[100]= "Data Structures through C in Depth";
	del_multspaces(str);
	puts(str);
	return 0;
}
void del_multspaces(char *str)
{
	int i=0,j=0;
	while (i<=strlen(str)-1)
	{
		if(str[i]==' ')
		{
			while(str[i]==' ')
				i++;
			str[j++]=' ';
		}
		str[j++]=str[i++];
	}
	str[j]='\0';
}

