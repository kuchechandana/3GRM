#include<stdio.h>
main()
{
	int a[5]={1,2,3,4,5},i,j,temp;
	printf("after reversing\n");
	for(i=0,j=4;i<j;i++,j--)
	{
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
	}
	for(i=0;i<5;i++)
		printf("%d\n",a[i]);
}
