#include<stdio.h>
struct fighter
{
	int strength;
	int fights;
};
int n,q,i,fighter_id=-1,fighter_left=1;
struct fighter fighters[100001];
int main()
{
	scanf("%d %d",&n,&q);
	for(i=0;i<n;i++)
	{
		scanf("%d",&fighters[i].strength);
	}
	while(fighter_left>0)
	{
		fighter_left=fighter_id=-1;
		for(i=0;i<n;i++)
		{
			if(fighters[i].strength>0)
			{
				fighter_left++;
				if(fighter_id==-1)
				{
					fighter_id=i;
				}
				else
				{
					if(fighters[fighter_id].strength<fighters[i].strength)
					 fighters[fighter_id].strength=-1;
					else
					 fighters[i].strength=-1;
					fighters[fighter_id].fights++;
					fighters[i].fights++;
					fighter_id=-1;  
				}
			}
		}
	}
	while(q--)
	{
		scanf("\n%d",&i);
		printf("%d\n",fighters[i-1].fights);
	}
	return 0;
}
