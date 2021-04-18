#include<stdio.h>
int main()
{
	char s[200];
	int xco=0,yco=0;
	gets(s);
	for(int i=0;s[i]!='\0';i++)
	{
		if(s[i]=='L')
		xco=xco-1;
		else if(s[i]=='R')
        xco=xco+1;
		else if(s[i]=='U')
		yco=yco+1;
		else
		yco=yco-1;
	}
	printf("%d %d",xco,yco);
}
