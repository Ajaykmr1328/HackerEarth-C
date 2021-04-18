#include<stdio.h>
int main()
{
	int t,n,i;
	scanf("%d",&t);
	while(t--)
	{
		long long even=0,odd=0;
		scanf("%d",&n);
		int a[n];
    for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
			if(a[i]&1) odd++;
			else even ++;
		}
		printf("%lld\n",even*odd);
	}
}
