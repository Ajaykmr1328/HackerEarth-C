#include<stdio.h>
#define MAX 100000
int strlen(char s[])
{
	int c=0;
	while(s[c]!='\0'){
		c++;
	}
	return c;
}
int main()
{
	char s1[MAX],s2[MAX];
	int l1,l2,t,sum1=0,sum2=0,i;
	scanf("%d",&t);
	while(t!=0)
	{
		scanf("%s %s",&s1,&s2);
        l1=strlen(s1);
		l2=strlen(s2);
		if(l1==l2)
	    {
			for(i=0;i<l1;i++){
				sum1+=s1[i]*(s1[i]);
				sum2+=s2[i]*(s2[i]);
			}
			if(sum1==sum2){
				printf("YES\n");
			}
			else{
				printf("NO\n");
			}
           sum1=sum2=0;
		}
		t--;
	}
}
