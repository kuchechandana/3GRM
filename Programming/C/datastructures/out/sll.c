#include"header.h"
main()
{
int c;
char ch;
ST *hp=0;
do
{
add_middle(&hp);
printf("do u want to add another node\n");
scanf(" %c",&ch);
}while(ch=='y'||ch=='Y');
print(hp);
c=count(hp);
printf("c=%d\n",c);
}
