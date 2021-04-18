#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int SH,SM,EH,EM;
		scanf("%d %d %d %d",&SH,&SM,&EH,&EM);
		if(EM<SM){
		printf("%d %d\n",(EH-SH-1),(EM+60-SM));
		}
		else
		printf("%d %d\n",(EH-SH),(EM-SM));
	}
	return 0;
}
