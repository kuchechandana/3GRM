#include<stdio.h>
#include<string.h>
main()
{
char s[10]="hello";
int i=0;
while(s[i]!='\0')
{
printf("\n%c %c",s[i],*(i+s));
i++;
}
printf("%c %c",s[i],*(i+s));
}
