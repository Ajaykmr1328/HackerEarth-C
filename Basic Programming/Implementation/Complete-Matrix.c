#include<stdio.h>
#include<string.h>
#define SIZE 256
char* CompleteString(char s[])
{
	int i,hash[SIZE];
	for(i=0;i<SIZE;i++)
	{
		hash[i]=0;
	}
	for(i=0;i<strlen(s);i++)
	{
		hash[s[i]]++;
	}
	for(i=97;i<123;i++)
	{
		if(hash[i]==0) return "NO";
	}
	return "YES";
}
int main()
{
  int t,i;
	scanf("%d",&t);
  for(i=1;i<=t;i++)
	{
		char s[100];
		scanf("%s",&s);
		printf("%s\n",CompleteString(s));
	}
}
