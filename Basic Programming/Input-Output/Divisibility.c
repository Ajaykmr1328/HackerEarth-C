#include <stdio.h>
int main()
{
	long int t,n,i;
	scanf("%ld",&t);
    for(i=0;i<t;i++)
	{
		scanf("%ld",&n);
	}
	if(n%10==0)
	printf("Yes");
	else
	printf("No");
	return 0;
}
