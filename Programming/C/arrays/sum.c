#include<stdio.h>
#include<string.h>
main()
{
	int a[10],i,sum=0,product=1;
	printf("enter the numbers\n");
	for(i=0;i<10;i++)
		scanf("%d\n",&a[i]);
	for(i=0;i<10;i++)
	{
		if(a[i]%2==0)
			sum=sum+a[i];
	}
	printf("sum=%d\n",sum);
	for(i=0;i<10;i++)
	{
		if(a[i]%2!=0)
			product=product*a[i];
	}
	printf("product=%d\n",product);
}
