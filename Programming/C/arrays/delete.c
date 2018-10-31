#include<stdio.h>
main()
{
	int i,a[10],j,num;
	for(i=0;i<10;i++)
		scanf("%d\n",&a[i]);
	printf("enter the num to be deleted");
	scanf("%d\n",&num);
	for(i=0;i<10;i++)
	{
		if(a[i]==num)
		{
			for(i=j;i<9;i++)
				a[i]=a[i+1];
		}
	}
	for(i=0;i<9;i++)
		printf("%d\n",a[i]);
}
