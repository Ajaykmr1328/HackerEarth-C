#include<stdio.h>
int main()
{
	int t,n;
	scanf("%d",&t);
	for(int k=1;k<=t;k++){
		scanf("%d",&n);
		for(int i=1;i<=n;i++){
			for(int j=1;j<=2*n;j++){
				if(j<=i||j>2*n-i)
				printf("*");
				else
				printf("#");
			}
			printf("\n");
		}
	}
	return 0;
}
