#include<stdio.h>
int mod(int a)
{
	if(a<0)
	return -a;
	else
	return a;
}
int main()
{
	int LiftA=0,LiftB=7,call;
	long int t;
	scanf("%d",&t);
	for(int i=0;i<t;i++)
	{
		scanf("%d",&call);
		if(mod(LiftA-call)<mod(LiftB-call))
		{
			printf("A\n");
			LiftA=call;
		}
		else if(mod(LiftA-call)>mod(LiftB-call))
		{
			printf("B\n");
			LiftB=call;
		}
		else
		{
			if(LiftA<LiftB)
			{
				printf("A\n");
			    LiftA=call;
			}
			else
			{
				printf("B\n");
				LiftB=call;
			}
		}
	}
}
