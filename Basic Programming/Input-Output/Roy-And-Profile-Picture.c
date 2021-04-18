#include<stdio.h>
int main()
{
	int N,L,W,H,i;
	scanf("%d",&L);
	scanf("\n%d",&N);
    for(i=1;i<=N;i++){
	scanf("\n%d %d",&W,&H);
	if(W<L||H<L){
		printf("UPLOAD ANOTHER\n");
	}
	else if(W==H){
     printf("ACCEPTED\n");
	}
	else{
		printf("CROP IT\n");
	}
}
	return 0;
}
