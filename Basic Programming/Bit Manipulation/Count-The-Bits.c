#include<stdio.h>
int main()
{
	int t,count,n;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d\n",&n);
		count=0;
		while(n)
		{
			n=n&(n-1);
			count++;
		}
		printf("%d\n",count);
	}
	return 0;
}
