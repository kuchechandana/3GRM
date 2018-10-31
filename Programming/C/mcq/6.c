#include<stdio.h>
main()
{
int i;
char *p;
i=0X89;
p=(char *)i;
++p;
printf("%X\n",p);

}
