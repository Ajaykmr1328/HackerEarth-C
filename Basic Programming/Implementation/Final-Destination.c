#include<stdio.h>
#include<string.h>
int main()
{
	char s[100000];
	scanf("%s",&s);
	int length=strlen(s),x=0,y=0;
	for(int i=0;i<length;i++)
	{
		if(s[i]=='L') x--;
		else if(s[i]=='R') x++;
		else if(s[i]=='U') y++;
		else if(s[i]=='D') y--;
	}
	printf("%d %d",x,y);
}
