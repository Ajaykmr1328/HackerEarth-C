#include<stdio.h>
int main()
{
	int n,t,s;
	scanf("%d",&t);
	for(int i=1;i<=t;i++){
		scanf("%d",&n);
		if(n%12==0||n%12==1||n%12==6||n%12==7)
		{
			if(n%12==0)
			{
			  s=n-11;
			  printf("%d WS\n",s);
			}
			else if(n%12==1)
			{
				s=n+11;
				printf("%d WS\n",s);
			}
			else if(n%12==6)
			{
				s=n+1;
				printf("%d WS\n",s);
		    }
			else if(n%12==7)
			{
				s=n-1;
				printf("%d WS\n",s);
			}
		}
		else if(n%12==2||n%12==11||n%12==5||n%12==8)
		{
			if(n%12==2)
			{
				s=n+9;
				printf("%d MS\n",s);
			}
			else if(n%12==11)
			{
				s=n-9;
				printf("%d MS\n",s);
			}
			else if(n%12==8)
			{
				s=n-3;
				printf("%d MS\n",s);
			}
			else if(n%12==5)
			{
				s=n+3;
				printf("%d MS\n",s);
			}
		}
		else if(n%12==3||n%12==10||n%12==4||n%12==9)
		{
			if(n%12==3)
			{
				s=n+7;
				printf("%d AS\n",s);
			}
			else if(n%12==10)
			{
				s=n-7;
				printf("%d AS\n",s);
			}
			else if(n%12==4)
			{
				s=n+5;
				printf("%d AS\n",s);
			}
			else if(n%12==9)
			{
				s=n-5;
				printf("%d AS\n",s);
			}
		}
	}
}
