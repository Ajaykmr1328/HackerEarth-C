#include<stdio.h>
int main()
{
	int n,q,a,b,c;
	scanf("%d %d",&n,&q);
	int arr[n],i=0;
	while(i<n)
	{
		scanf("%d",&arr[i]);
		i++;
	}
	while(q>0)
	{
		long sum=0;
		scanf("%d %d %d",&a,&b,&c);
		if(a==1)
		{
			arr[b]=c;
		}
		else if(a==2)
		{
			if(c<n)
			{
				while(b<=c)
				{
					sum+=arr[b];
					b++;
				}
				printf("%ld\n",sum);
			}
			else 
		   printf("-1\n");
		}
		q--;
	}
	return 0;
}
