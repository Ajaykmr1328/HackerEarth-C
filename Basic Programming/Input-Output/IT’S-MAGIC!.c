#include<stdio.h>
int main()
{
	long long int n;
	scanf("%d",&n);
	long long int a[n];
	long long int sum=0;
	long long int min=100000000;
	long long int index=-1;
	for(int i=0;i<n;i++)
	{
		scanf("%lld",&a[i]);
		sum=sum+a[i];
	}
	for(int i=0;i<n;i++)
	{
		if((sum-a[i])%7==0&&min>a[i])
		{
			min=a[i];
			index=i;
		}
	}
	printf("%d",index);
}
