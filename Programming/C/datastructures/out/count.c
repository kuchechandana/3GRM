#include"header.h"
int count(ST *p)
{
int c=0;
while(p)
{
c++;
p=p->next;
}
return c;
}
