#include<stdio.h>
main()
{
	int i,a[10],c=0,j,num;
	printf("enter the elements of array");
	for(i=0;i<10;i++)
		scanf("%d\n",&a[i]);
	for(i=0;i<10;i++)
	{
		for(j=2;j<a[i];j++)
		{
			if(num%i==0)
			{
				break;
			}
			if(num==i)
			{
				printf("%d\n",a[i]);	
				c++;
			}

		}
	}
	printf("c=%d\n",c);
}	
