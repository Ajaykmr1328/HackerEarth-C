#include<stdio.h>
int main()
{
	int n;
	int A,B=0;
	scanf("%d",&n);
	A=n/5;
    if(n%5!='\0')
	B=1;
	printf("%d",A+B);
	return 0;
}
