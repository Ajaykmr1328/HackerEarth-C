#include<stdio.h>
int main()
{
	int n,k,count=0,flag=0;
	scanf("%d %d",&n,&k);
	int a[n];
	for(int i=0;i<n;i++)
	   scanf("%d",&a[i]);
	int max=a[0];
	for(int i=0;i<n;i++){
		if(max<a[i]){
			max=a[i];
		}
	}
	int H[max];
	for(int i=0;i<n;i++)
	H[i]=0;
	for(int i=0;i<n;i++){
		if(k-a[i]>0&&H[k-a[i]]!=0)
		{
			flag=1;
			break;
		}
		H[a[i]]++;
	}
	if(flag==1)
	printf("YES");
	else
	printf("NO");     
}
