#include"header.h"
void print(ST *p)
{
while(p)
{
printf("%d %s %f\n",p->rollno,p->name,p->marks);
p=p->next;
}
}
