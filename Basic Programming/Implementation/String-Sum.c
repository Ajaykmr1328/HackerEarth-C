#include<stdio.h>
int main()
{
 char s[1000];
 int i,sum=0;
 scanf("%s",&s);
 for(i=0;s[i]!='\0';i++)
 {
	 sum+=("%d",s[i]-96);
 }
 printf("%d",sum);
 return 0;
}
