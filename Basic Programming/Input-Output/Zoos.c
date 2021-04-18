#include<stdio.h>
int main()
{
	char s[20];
	int zcount=0,ocount=0,i;
	scanf("%s",&s);
	for(i=0;s[i]!='\0';i++){
		scanf("%c",&s[i]);
		if(s[i]=='z')
		zcount++;
		else
		ocount++;
	}
	if(zcount*2==ocount)
	printf("Yes");
	else
	printf("No");
}
