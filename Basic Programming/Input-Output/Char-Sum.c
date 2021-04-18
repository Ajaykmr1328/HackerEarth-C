#include<stdio.h>
int main()
{
	char S[101];
	gets(S);
	int i,sum=0;
    for(i=0;S[i]!='\0';i++)
	{
     sum=sum+(S[i]-96);
	}
	printf("%d",sum);
}
