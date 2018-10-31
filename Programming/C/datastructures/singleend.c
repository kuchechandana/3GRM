#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct st
{
	int rollno;
	char name[10];
	float marks;
	struct st *next;
}ST;
void add_end(ST **);
void print(ST *);
void save_file(ST *p);
void reverse_data(ST *p);
void read_file(ST **);
main()
{
	int c;
	char ch;
	ST *hp=0;
	read_file(&hp);
	print(hp);

	do
	{
		add_end(&hp);
		printf("do u want to enter another node\n");
		scanf(" %c",&ch);
	}while(ch=='y'||ch=='Y');
	printf("-----------------------------------\n");
	print(hp);
	save_file(hp);
}

void read_file(ST **)
{
	ST v,*temp,*temp1;
	FILE *fp;
	fp=fopen("data","r");
	while(fscanf(fp,"%d %s %f",&v.rollno,v.name,&v.marks)!=-1)
	{
		temp=malloc(sizeof(ST));
		temp->rollno=v.rollno;
		strcpy(temp->name,v.name);
		temp->marks=v.marks;
		if(*ptr==0)
		{
			temp->next=*ptr;
			*ptr=temp;
		}
		else
		{
			temp1=*ptr;
			while(temp1->next)
				temp1=temp1->next;
			temp->next=temp1->next;
			temp1->next=temp;
		}
	}
}
void reverse_data(ST *p)
{
	ST *temp,*temp1;
	int c,i,j,t;
	char s[20];
	float f;
	//c=count(p);
	temp=p;
	for(i=0;i<c/2;i++)
	{
		temp1=p;
		for(j=0;j<c-1-i;j++)
			temp1=temp1->next;

		t=temp->rollno;
		temp->rollno=temp1->rollno;
		temp1->rollno=t;

		strcpy(s,temp->name);
		strcpy(temp->name,temp1->name);
		strcpy(temp1->name,s);

		f=temp->marks;
		temp->marks=temp1->marks;
		temp1->marks=f;

		temp=temp->next;
	}
}




void save_file(ST *p)
{
	FILE *fp;
	fp=fopen("data","w");
	while(p)
	{
		fprintf(fp,"%d %s %f\n",p->rollno,p->name,p->marks);
		p=p->next;
	}
}

void add_end(ST **ptr)
{
	ST *temp,*temp1;
	temp=malloc(sizeof(ST));
	printf("enter the rollno\n");
	scanf("%d",&temp->rollno);
	printf("enter the name\n");
	scanf("%s",temp->name);
	printf("enter the marks\n");
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
			temp1=temp1->next;
		temp->next=temp1->next;
		temp1->next=temp;
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


