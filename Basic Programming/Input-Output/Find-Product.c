#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[n];
	long int ans=1;
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
		ans=(ans*a[i])%(1000000007);
	}
	printf("%d",ans);
}
