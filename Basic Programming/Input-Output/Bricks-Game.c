#include<stdio.h>
int main()
{
	int n,i,j=1,sum=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum=sum+i;
        if(sum>=n)
		{
		printf("Patlu");
		break;
	    }
			j=i*2;
        	sum=sum+j;
        if(sum>=n)
		{
			printf("Motu");
			break;
		}
	}
}
