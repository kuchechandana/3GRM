#include<stdio.h>
#include<string.h>
main()
{
	char s[10],ch;
	int i,j,c=0,n;
	printf("enter a string");
	scanf("%s",&s);
        n=strlen(s);
	for(i=0;i<n;i++)

	{
		if(s[i]!=0)
		{
			ch=s[i];
                        c=0;
			for(j=0;j<n;j++)
				if(s[j]==ch)
				{
					c++;
					s[j]=0;

				}		
			printf("char %c is present %d times\n",ch,c);
			
		}
	}
}
