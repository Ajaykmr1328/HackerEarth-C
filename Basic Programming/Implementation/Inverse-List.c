#include<stdio.h>
int Equal(int a[],int b[],int n)
{
	int equal=0,i;
	for(i=0;i<n;i++)
	  equal |= (a[i]^b[i]);
  return (equal==0);
}
int main()
{
	int t,n,i;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		int a[n],tmp[n];
		for(i=0;i<n;i++)
		  scanf("%d",&a[i]);
		for(i=0;i<n;i++){
			tmp[a[a[i]-1]-1]=a[i];
		}
		puts(Equal(a,tmp,n)?"inverse":"not inverse");	
	}
}
