#include<stdio.h>
int main()
{
	int t,n,m;
	scanf("%d",&t);
	for(int i=1;i<=t;i++){
		scanf("%d %d\n",&n,&m);
		if(m%n==0)
		printf("Yes\n");
		else
		printf("No\n");
	}
}
