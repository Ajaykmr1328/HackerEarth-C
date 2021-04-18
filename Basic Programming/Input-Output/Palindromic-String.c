#include<stdio.h>
int main()
{
	char s[101];
	int length,i,j,temp=0;
	scanf("%s",&s);
	for(length=0;s[length]!='\0';length++);
	for(i=0,j=length-1;i<length/2;i++,j--)
	{
		if(s[i]!=s[j])
		{
			temp=1;
			break;
		}
	}
	if(temp==0)
	printf("YES");
	else
	printf("NO");
}
