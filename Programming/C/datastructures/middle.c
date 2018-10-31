#include<stdio.h>
#include<stdlib.h>
typedef struct st
{
	char name[20];
	int rollno;
	float marks;
	struct st *next;
}ST;
void add_middle(ST **);
void print(ST *);
main()
{
	ST *hp=0;
	char ch;
	do
	{
		add_middle(&hp);
		printf("do u want to add another node\n");
		scanf(" %c",&ch);
	}
	while(ch=='y'||ch=='Y');
	print(hp);
}
void add_middle(ST **ptr)
{
	ST *temp,*temp1;
	temp=malloc(sizeof(ST));
	printf("enter rollno\n");
	scanf("%d",&temp->rollno);
	printf("enter name\n");
	scanf("%s",temp->name);
	printf("enter marks\n");
	scanf("%f",&temp->marks);
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
void print(ST *p)
{
	while(p)
	{
		printf("%d %s %f\n",p->rollno,p->name,p->marks);
		p=p->next;
	}
}
