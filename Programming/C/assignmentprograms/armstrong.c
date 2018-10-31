#include<stdio.h>
main()
{
	int i,m,n,t,r,c,s;
	for(i=1;i<=1000;i++)
	{
		for(c=0,n=i;n;c++,n/=10);
		for(s=0,n=i;n;n/=10)
		{
			r=n%10;
			for(m=0,t=1;m<c;t*=r,m++);
			s=s+t;
		}
		if(s==i)
			printf("armstrong number %d\n",s);
	}
}
