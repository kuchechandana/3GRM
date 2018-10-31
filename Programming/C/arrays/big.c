#include<stdio.h>
main()
{
	int a[10],i,big,small;
	printf("enter the elements\n");
	for(i=0;i<10;i++)
		scanf("%d\n",&a[i]);
         big=a[0];
	for(i=1;i<10;i++)
	{
		if(a[i]>big)
			big=a[i];
	}
	printf("big=%d\n",big);
	small=a[0];
        for(i=1;i<10;i++)
	{
		if(a[i]<small)
			small=a[i];
	}
	printf("small=%d\n",small);
}
