#include<stdio.h>
int main()
{
	int t,n,count=0;
	scanf("%d",&t);
	while(t--)
	{
		count=0;
		scanf("%d",&n);
    int a[n];
		for(int i=2;i<=n;i++)
		{
			for(int j=1;j<i;j++)
			{
				if((i^j)<=(0^n)) count++;
			}
		}
		printf("%d\n",count);
	}
	return 0;
}
