#include<stdio.h>
#include<stdlib.h>
typedef struct st
{
	char name[20];
	int rollno;
	float marks;
	struct st *next;
}ST;
void add_begin(ST **);
void print(ST *);
main()
{
	char ch;
	ST *hp=0;
	do
	{
		add_begin(&hp);
		printf("do u want to add another node\n");
		scanf(" %c",&ch);
	}
	while(ch=='y'||ch=='Y');
	print(hp);
}
void add_begin(ST **ptr)
{
	ST *temp;
	temp=malloc(sizeof(ST));
	printf("enter rollno\n");
	scanf("%d",&temp->rollno);
	printf("enter name\n");
	scanf("%s",temp->name);
	printf("enter marks\n");
	scanf("%f",&temp->marks);
	temp->next=*ptr;
	*ptr=temp;
}
void print(ST *p)
{
	while(p)
	{
		printf("%d %s %f\n",p->rollno,p->name,p->marks);
		p=p->next;
	}
}
