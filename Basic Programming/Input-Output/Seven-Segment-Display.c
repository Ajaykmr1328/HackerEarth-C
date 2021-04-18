#include<stdio.h>
int main()
{
	int T,i,k;
	char a[100];
	scanf("%d",&T);
	while(T--)
	{
		int sum=0;
		scanf("%s",&a);
		for(i=0;a[i]!='\0';i++)
		{
			if(a[i]=='0')
			sum+=6;
			else if(a[i]=='1')
			sum+=2;
			else if(a[i]=='2')
			sum+=5;
			else if(a[i]=='3')
			sum+=5;
			else if(a[i]=='4')
			sum+=4;
			else if(a[i]=='5')
			sum+=5;
			else if(a[i]=='6')
			sum+=6;
			else if(a[i]=='7')
			sum+=3;
			else if(a[i]=='8')
			sum+=7;
			else if(a[i]=='9')
			sum+=6;
		}
		if(sum%2!='\0')
		{
			int j=1,l=7;
			printf("%d",l);
			for(k=2;k<=sum/2;k++)
			printf("%d",j);
		}
		else
		{
            int j=1;
			for(k=1;k<=sum/2;k++)
			printf("%d",j);
		}
		printf("\n");
	}
}
