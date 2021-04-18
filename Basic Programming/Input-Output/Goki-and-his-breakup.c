#include<stdio.h>
int main()
{
	int N,X,Y,i;
	scanf("%d%d",&N,&X);
    for(i=1;i<=N;i++)
	{
	scanf("%d\n",&Y);
    if(X>Y)
	printf("NO\n");
	if(Y>=X)
	printf("YES\n");
	}
	return 0;
}
