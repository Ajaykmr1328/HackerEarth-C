#include<stdio.h>
int main()
{
	int l,r,k,i,n;
	scanf("%d %d %d",&l,&r,&k);
	for(i=l;i<=r;i++){
		if(i%k==0){
			n++;
		}
	}
	printf("%d",n);
	return 0;
}
