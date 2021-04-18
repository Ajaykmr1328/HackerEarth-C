#include<stdio.h>
int main()
{
	char s[200];
	int k;
	scanf("%s %d",&s,&k);
	for(int i=0;i<k;i++)
	{
		if(s[i]=='9') 
		  k++;
		else 
		  s[i]='9';
	}
	printf("%s",&s);
	return 0;
}
