#include<stdio.h>
#include<string.h>
typedef struct st
{
	char name[20];
	int rollno;
	float marks;
	struct st *next;
}ST;
void addend(ST **);
void print(ST *);
main()
{
	char ch;
	ST *hp=0;
		do
		{
			addend(&hp);
				printf("do u want to enter another node\n");
			scanf(" %c",&ch);
		}
		while(ch=='y'||ch=='Y');
	print(hp);
}
void addend(ST **ptr)
{
	ST *temp,*temp1;
	temp=malloc(sizeof(ST));
	printf("enter rollno\n");
	scanf("%d",&temp->rollno);
	printf("enter name\n");
	scanf("%s",temp->name);
	printf("enter marks\n");
	scanf("%f",&temp->marks);
	if(*ptr==0)
	{
		temp->next=*ptr;
		*ptr=temp;
	}
	else
	{
		temp1=*ptr;
		while(temp1->next)
		{
			temp1=temp1->next;
			temp->next=temp1->next;
			temp1->next=temp;
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
