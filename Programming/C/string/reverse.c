#include<stdio.h>
#include<string.h>
main()
{

char s[20],temp;
int i,l,j;
printf("enter the string to be reversed\n");
scanf("%s",&s);
l=strlen(s);
for(i=0,j=l;i<j;i++,j--)
{
strcpy(temp,s[i]);
strcpy(s[i],s[j]);
strcpy(s[j],temp);
}
printf("%s",s);

}
