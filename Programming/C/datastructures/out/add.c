#include"header.h"
void add_middle(ST **ptr)
{
ST *temp,*temp1;
temp=malloc(sizeof(ST));
printf("enter the rollno\n");
scanf("%d",&temp->rollno);
printf("enter the name\n");
scanf("%s",temp->name);
printf("enter the marks\n");
scanf("%d",temp->marks);
if(*ptr==0||(*ptr)->rollno>temp->rollno)
{
temp->next=*ptr;
*ptr=temp;
}
else
{
temp1=*ptr;
while(temp1)
{
if(temp1->next==0||temp1->next->rollno>temp->rollno)
{
temp->next=temp1->next;
temp1->next=temp;
break;
}
temp1=temp1->next;
}
}
}
